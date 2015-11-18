/*
    参考http://blog.csdn.net/insaneguy/article/details/9136387
*/

#include <iostream>
using namespace std;

void Reverse(int [],int);

int main() {
    int m,n; //n个数，右移m位
    cin>>n>>m;
    int data[n];

    for(int i = 0; i < n; i++) {
        cin>>data[i];

    }
    m %= n; //取余，减少移动次数
    Reverse(data,n);
    Reverse(data+m,n-m);
    Reverse(data,m);
    for(int i = 0; i < n; i++) {
        if(i+1 != n) {
            cout<<data[i]<<" ";
        }else {
            cout<<data[i];
        }

    }

}

void Reverse(int data[],int len) {
    for(int i = 0; i < (len+1)/2; i++) {
        int temp = data[i];
        data[i] = data[len-i-1];
        data[len-i-1] = temp;
    }
}
