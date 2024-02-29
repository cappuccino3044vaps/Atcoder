#include<iostream>
using namespace std;
int count_n(int N,int* A){
    int i=0;
    int flag=0;
    while(flag==0&&i<N){
        flag+=A[i]%2;
        i++;
        }
    return flag;
}

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int flag=0;
    int count=0;
    while(flag==0){
        if(count_n(N,A)==0){
            for(int j=0;j<N;j++){
                A[j]/=2;
            }count++;
        }else{flag=1;}
    }
    cout<<count<<endl;
    return 0;
}