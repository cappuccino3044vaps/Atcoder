#include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main(){
int Q;
cin>>Q;
vector<int> x(Q);
vector<int> y;
deque<int> deck;
int number;

for(int i=0;i<Q;++i){
    cin>>number>>x[i];
    if(number==1){
        deck.push_front(x[i]);
    }else if(number==2){
        deck.push_back(x[i]);
    }else if(number==3&&deck.size()>=x[i]){
        y.push_back(deck[x[i]-1]);
    }else{cout<<"Exception_Error"<<endl;break;}
    }
for(int value:y){
    cout<<value<<endl;
}
}