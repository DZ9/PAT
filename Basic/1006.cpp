#include <iostream>

using namespace std;
void print(int,char);
int main() {
    int n;
    cin>>n;

    int bn = n/100;
    int sn = (n%100)/10;
    int gn = n%10;
    print(bn,'B');
    print(sn,'S');

    int i = 1;
    while(gn >= i) {
        cout<<i;
        i++;
    }
}

void print(int n,char c) {
    for(int i = 0; i < n; i++) {
        cout<<c;
    }
}
