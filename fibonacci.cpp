#include <iostream>
using namespace std;
int main(){
    int fbnq[100];
    int a,b;
    int isum;
    fbnq[0]=1;
    fbnq[1]=1;
    for(int i=2;i<100;i++){
        fbnq[i]=fbnq[i-1]+fbnq[i-2];
    }
    cin >>a >> b;
    isum=0;
    for(int i=a-1;i<b;i++)
    {
        isum= (isum+fbnq[i])%2;
    }
    cout << isum <<endl;
}
