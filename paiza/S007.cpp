//カッコの前の数字と文字の前の数字で処理を分ける必要があった。
//カッコの前の数字はalphaとして保持して、文字の前の数字はbetaとして保持する。
//数値を加算する際にはalpha*betaを行う。
//alphaはfor文が終わるたびに1に初期化
//betaは加算処理をした後に初期化
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//()内は再帰処理
//2(2u)3(2u) -> uuuuuuuuuuu
//2((2u)y) -> uuuuuuuuyy
void calculate(string s, long long N[26],int alpha){
    string num = "";
    long long count = 0;
    int start = 0;
    for(int i = 0; i < s.size(); i++){
        //数字の場合は数字以外が出るまでnumに格納
        if(s[i] >= '0'&&s[i] <= '9'){
            num += s[i];
            cout<<"n is "<<num<<endl;
        //数字以外の場合はnumを初期化して、()内の処理を行う
        }else{
            if(num != ""){
                alpha *= stoi(num);
                cout<<"a is "<<alpha<<endl;
                num = "";
            }
            if(s[i] == '('){
                start=i+1;
                count++;
            }else if(s[i] == ')'){
                count--;
                //countが0になった場合、()内の処理を行う
                if(count==0){
                    calculate(s.substr(start,i-start),N,alpha);
                }
            //()内の処理が終わった後、アルファベットの場合はNに格納
            }else if(count==0){
                N[s[i]-97]+=alpha;
                cout <<s[i]-97 <<endl;
            }
        }
    }
    alpha=1;
}


int main(){
    string s;
    long long N[26] = {0};
    char T[26];
    for(int i = 0; i < 26; i++){
        T[i] = 'a' + i;
    }
    int alpha = 1;
    cin >> s;
    calculate(s,N,alpha);
    for(int i = 0; i < 26; i++){
        cout <<T[i] <<" "<<N[i] <<endl;
    }
    return 0;
}