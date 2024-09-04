#include<iostream>
using namespace std;

int main(){
int N,Q;
cin>>N;
int C[N],P[N];
for(int i=1;i<=N;++i){
    cin>>C[i]>>P[i];
}
cin>>Q;
int L[Q],R[Q];
for(int i=0;i<Q;++i){
    cin>>L[i]>>R[i];
}
int classA_sum[N],classB_sum[N];
for(int i=1;i<=N;++i){
    classA_sum[i]=classA_sum[i-1];
    classB_sum[i]=classB_sum[i-1];
    
    if(C[i]==1){classA_sum[i]+=P[i];}
    else if(C[i]==2){classB_sum[i]+=P[i];}
    else{break;}
    }
for(int i=0;i<Q;++i){
    cout<<classA_sum[R[i]]-classA_sum[L[i]-1]<<" ";
    cout<<classB_sum[R[i]]-classB_sum[L[i]-1]<<endl;
    }
}