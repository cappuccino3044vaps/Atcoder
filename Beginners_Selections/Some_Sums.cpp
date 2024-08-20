#include<iostream>
#include<string>
using namespace std;

int sum(int,int,int);

int main()
{
    int a,b,n;
    cin>>n>>a>>b;
    int num=sum(a,b,n);
    cout<<num<<endl;

    return 0;
}

int sum(int a,int b,int n){
    int count=0;
    int num=0;
    
    for(int i=1;i<=n;i++){
    int sum=0;
    string num_str=to_string(i);
    for (char digit : num_str){
        sum+=digit-'0';
    }
    if(sum>=a){
        if(b>=sum){
            num+=i;
        }
      }
    }
    return num;
}