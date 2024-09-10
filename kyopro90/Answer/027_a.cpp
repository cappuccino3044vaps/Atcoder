#include <iostream>
#include <string>
using namespace std;
int main (){
int N;
cin>>N;
string Name[N];
for(int i=0;i<N;++i){
    cin>>Name[i];
}
cout<<1<<endl;
for(int i=1;i<N;++i){
    for(int j=0;j<i;++j){
        if(Name[i]==Name[j]){
            break;
        }
        else if (j==i-1){
            cout<<i+1<<endl;
        }
    }
}
}