#include<iostream>
#include<vector>

using namespace std;


int main()

{
    int n;
    cin>>n;
    vector<vector<int>> points(n);
    vector<int> time(n);
    vector<int> AtCoDeer={0,0};
    bool checker=true;
    int p1,p2;
    for(int i=0;i<n;i++){
        cin>>time[i]>>p1>>p2;
        points[i].push_back(p1);
        points[i].push_back(p2);
    }
    for(int j=0;j<n;j++){
        int Distance=abs(AtCoDeer[0]-points[j][0])+abs(AtCoDeer[1]-points[j][1]);
        int w_time=0;
        if(j==0){
            w_time=time[j];
        }else{w_time=time[j]-time[j-1];}
        if(w_time>=Distance&&(w_time-Distance)%2==0){
            AtCoDeer={points[j][0],points[j][1]};
        }else{
            checker=false;
            break;
        }
    }
    if(checker){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}