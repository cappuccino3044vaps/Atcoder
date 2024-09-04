#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    long long K;
    cin>>N>>K;
    vector<int> A,B;
    int tmp_a,tmp_b;
    int difference_sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>tmp_a>>tmp_b;
        A.push_back(tmp_a);
        B.push_back(tmp_b);
        difference_sum+=abs(A[i]-B[i]);
    }
    if(K>=difference_sum && (difference_sum-K)%2==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}