#include<iostream>
#include<string>
using namespace std;
int main(){
    int T;
    long y1,m1,d1;
    long y2,m2,d2;
    long diff;
    string sday;
    string sWeek[5]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> y1;
        cin >> m1;
        cin >> d1;
        cin >> sday;
        cin >> y2;
        cin >> m2;
        cin >> d2;
        diff= 30+d2-d1;
        for(int j=0;j<5;j++)
            if(sday==sWeek[j]){                
                cout << sWeek[(j+diff)%5] << endl;            
            }
    }
 
}
