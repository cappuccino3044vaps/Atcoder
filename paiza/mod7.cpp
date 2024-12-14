#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    int b[N];
    int sum=0;
    for(int i=0; i<N; i++){
        cin >> a[i];
        b[i]=a[i]%7;
    }
    //N個の中から3つ選ぶ
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N-1; j++){
            for(int k=j+1; k<N; k++){
                if((b[i]+b[j]+b[k])%7==0){
                    sum++;
                }
            }
        }
    }
    cout << sum << endl;
}