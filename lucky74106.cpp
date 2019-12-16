#include<iostream>
using namespace std;
int main(){
    int T;
    int n;
    int iarray[110];
    for(int i=0;i<110;i++)
        iarray[i]=0;
    for(int i=0;i<110;i+=7)
        if(i%4 != 0)iarray[i]=1;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> n;
        for(int j=n;j<110;j++)
            if(iarray[j]==1)
            {
                cout << j << endl;
                break;
            }
    }
    return 0;
}
