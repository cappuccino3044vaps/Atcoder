#include<iostream>
using namespace std;
int main()
{
    int a;
    int b=0;
    cin>>a;
    for(int i=100;i>0;i/=10){
        if(a-i>=0){
            b++;
            a-=i;
        }
    }
    cout<<b<<endl;
    return 0;
}