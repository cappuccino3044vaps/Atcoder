#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> S(6);
    cin>>S[0]>>S[1]>>S[2]>>S[3]>>S[4]>>S[5];
    int N;
    cin>>N;
    vector<int> P(N);
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    int now=0;
    int count=0;
    for(int i=1;i<N;i++){
        for(int j=0;j<6;j++){
            if(P[i]==S[j]){
                if(now%2==0){
                    if(now+1==j){
                        count+=2;
                    }
                    else{
                        count++;
                    }
                }
                else{
                    if(now-1==j){
                        count+=2;
                    }
                    else{
                        count++;
                    }
                }
                now=j;
                break;
            }
        }
    }
    cout<<count<<endl;
}