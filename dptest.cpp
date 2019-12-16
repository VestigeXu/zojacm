#include<iostream>
using namespace std;
int opt(int i,int *ia, int *max){
    int i1,i2;
    if(max[i]!=0)return max[i];
    if(i==1)return max[1] = ia[0]>ia[1]?ia[0]:ia[1];
    if(i==0)return max[0] = ia[0];
    i1 = opt(i-1,ia,max);
    i2 = opt(i-2,ia,max)+ia[i];
    return max[i] = i1>i2?i1:i2;
}

int main(){
    int ia[15];
    int T;
    int max[15];
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> ia[i];
        max[i]=0;
    }
    cout << opt(T-1,ia,max) << endl;
}
