#include <iostream>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    int A[H][W],B[H][W];
    int sum_width[H],sum_height[W];

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            cin>>A[i][j];
            sum_width[i]+=A[i][j];
            sum_height[j]+=A[i][j];
        }
    }

    for(int i=0;i<H;++i){
        for(int j=0;j<W;++j){
            B[i][j]=sum_width[i]+sum_height[j]-A[i][j];
            cout<<B[i][j]<<' ';
        }
        cout<<endl;
    }
}