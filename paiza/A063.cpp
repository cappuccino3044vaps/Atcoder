#include<iostream>
#include<vector>
using namespace std;

//各項の計算
long long calculate(long long A,long long B){
    return abs(A-B);
}
//数列の作成
vector<long long> createNumbers(long long M,long long X,vector<long long> N){
    for(long long i=0;i<M;i++){
        N.push_back(X);
    }
    return N;
}

int main(){
    int K;
    cin>>K;
    long long M;
    int X;
    vector<long long> N;
    long long S=0;
    for(int i=0;i<K;i++){
        cin>>M>>X;
        N=createNumbers(M,X,N);
    }
    long long L=size(N)/2;
    for(long long i=0;i<L;i++){
        S+=calculate(N[i],N[L+i]);
    }
    cout<<S<<endl;
}