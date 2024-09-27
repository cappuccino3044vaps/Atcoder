#include<iostream>
#include<string>
#include<cmath>

using namespace std;

string Caluculator_829(string);
string Change_825(string);

int main(){
    int K;
    long long input;
    string N_8,N_9,ans;
    cin>>input>>K;
    N_8=to_string(input);
    for(int i=0;i<K;i++){
        N_9=Caluculator_829(N_8);
        N_8=Change_825(N_9);
    }
    cout<<N_8<<endl;
}

//8進数を9進数に変換
string Caluculator_829(string N){
    string N_9;
    long long N_10=0;
    //Nの文字数だけ繰り返す
    for(int i=0;i<N.size();i++){
        N_10+=(N[N.size()-i-1]-'0')*pow(8,i);
    }
    while(N_10>0){
        N_9.insert(0,to_string(N_10%9));
        N_10/=9;
    }
    return N_9;
}

string Change_825(string N){
    for(int i=0;i<N.size();i++){
        if(N[i]=='8'){
            N[i]='5';
        }
    }
    return N;
}