#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sorting_array(int,int*);

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(),a.rend());

    int alice=0;
    int bob=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            alice+=a[i];
        }else {
            bob+=a[i];
        }
    }
    int score=alice-bob;
    cout<<score<<endl;
    return 0;
}
