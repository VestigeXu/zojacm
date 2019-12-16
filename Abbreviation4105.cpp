#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> s;
        cout << s[0];
        for(int j=1;j<s.length();j++)
            if(s[j]=='a' or s[j]=='e' or  s[j]=='i' or  s[j]=='y' or  s[j]=='o' or  s[j]=='u' )
                continue;
            else
                cout << s[j];
        cout << endl;
    }
    return 0;
}
