#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    cin>>a>>b>>c>>x;

    int max=500*a+100*b+50*c;
    int sum=0;
    int count=0;

    if(max>x){
     for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for(int k=0;k<=c;k++){
                sum=500*i+100*j+50*k;
                if(x==sum){
                    count++;
                }else if(sum>x){
                    break;
                }
                sum=0;
            }
        }
     }
    }
    cout<<count<<endl;
    return 0;
}