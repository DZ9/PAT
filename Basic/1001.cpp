#include <iostream>
using namespace std;
int main() {
    int i;
    int n = 0;
    cin>>i;
    while(i!=1) {
        if(i%2 == 0) {
            i/=2;
        }else {
            i=3*i+1;
            i/=2;
        }
        n++;
    }
    cout<<n;
    return 0;
}
