#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    sort(d.rbegin(),d.rend());
    int min=d[0];
    int count=1;
    for(int i=0;i<n;i++){
        if(min>d[i]){
            count++;
            min=d[i];
        }
    }
    cout<<count<<endl;
    return 0;
}