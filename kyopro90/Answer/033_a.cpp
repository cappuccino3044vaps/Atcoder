#include <iostream>

using namespace std;

int main(){
    int H,W,MAX;
    cin>>H>>W;
    if(H==1||W==1){
        MAX=H*W;
    }else{
        MAX=(H+1)/2*(W+1)/2;
    }
    cout<<MAX<<endl;
}