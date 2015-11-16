#include <iostream>
#include <string>
#include <strstream>
using namespace std;
string getCN(char &m);
int getNum(char &c);

int main() {
    string s;
    int n = 0; //加和结果
    cin>>s;
    for(int i = 0; i < s.length(); i++) {
        n+=getNum(s[i]);
    }

    strstream ss; //int转string
    string sn;
    ss<<n;
    ss>>sn;
    for(int i = 0; i < sn.length(); i++) {
        if(i != sn.length()-1) {
            cout<<getCN(sn[i])<<" ";
        }else {
            cout<<getCN(sn[i]);
        }
    }
}

int getNum(char &c) {
    switch(c) {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}

string getCN(char &m) {
    switch(m) {
    case '0':
        return "ling";
    case '1':
        return "yi";
    case '2':
        return "er";
    case '3':
        return "san";
    case '4':
        return "si";
    case '5':
        return "wu";
    case '6':
        return "liu";
    case '7':
        return "qi";
    case '8':
        return "ba";
    case '9':
        return "jiu";
    default:
        return "ling";
    }
}
