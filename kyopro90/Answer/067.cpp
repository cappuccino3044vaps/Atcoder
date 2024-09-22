#include<iostream>

using namespace std;

int Caluculator(int);

int main(){
    int N,K;
    cin>>N>>K;
}

int Caluculator(int number){
    int N_10=0;
    int count_8=1;
    int digit_10;
    int digit_9;
    while(number>0){
        digit_10=number%10;
        N_10+=digit_10*count_8;
        number/=10;
        count_8*=8;
    }
    digit_9=9;
    while(N_10>digit_9*9){
        digit_9*=9;
    }
    while(N_10>0){
        N_10-
    }
    
}