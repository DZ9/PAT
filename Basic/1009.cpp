#include <iostream>
#include <stdio.h>
using namespace std;

int main()  {
    char data[80][40];
    int i = 0;

    while(scanf("%s",data[i]) != EOF) {
        i++;
    }

    for(i = i -1; i > 0; i--) {
        cout<<data[i]<<" ";
    }
    cout<<data[0];
}
