#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    string sa,sb;
    long long lla,llb;
    cin >> T;
    while(T--){
        cin >> sa >>sb;
        lla=0;
        llb=0;
        for(int i=0;i<sa.length();i++)
            lla+=sa[i]-'0';
        for(int i=0;i<sb.length();i++)
            llb+=sb[i]-'0';
        /*
        if(lla==1)
        {
            cout << (llb%3==1?1:0) <<endl;
        }
        else if(sa==sb)
        {
            cout << (llb%3==0?0:1) <<endl;
        }
        
        else*/ if(((lla-1)%3==1 and llb%3!=1) or ((lla-1)%3!=1 and llb%3==1))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
