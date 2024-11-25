#include<iostream>
#include<string>
#include <cmath> 
using namespace std;

bool caliculator(int N,int n,int M,int sum,int count){
    count++;
    for(int i=0;i<=n;++i){
        sum+=pow(3,i);
        if(sum==M){
            cout<<N<<endl;
            cout<<i<<" ";
            return true;
        }
        if(N>count){
            if(caliculator(N,n,M,sum,count)){
                cout<<i<<" ";
                return true;
            }
        }
        sum-=pow(3,i);
    }return false;
}

int main(){
int M;
cin>>M;

//3^(n+1)M>3^nを見つける
int n=0;
int power=1;
while(M>=power){
    n++;
    power*=3;
}n=n-1;

for(int N=1;N<20;++N){
    int sum=0;
    int count=0;
    if(caliculator(N,n,M,sum,count)){
        break;
    }

}
}
