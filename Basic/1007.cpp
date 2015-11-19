#include <iostream>

using namespace std;
bool isPrime(int n);
int main() {

    int num,count=0;
	cin>>num;
	for(int i = 3;i<=num-2;i++)
	{
		if(isPrime(i)&&isPrime(i+2))
			count++;
	}
	cout<<count<<endl;
}

bool isPrime(int n) {
    if(n == 1 || n == 0) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    /*
    ����: ���n��������, ��n������1<d<=sqrt(n)��һ������d.
    ֤��: ���n��������, ���ɶ���n��һ������d����1<d<n.
    ���d����sqrt(n), ��n/d������1<n/d<=sqrt(n)��һ������.
    */

    for(int i = 2 ; i*i <= n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
     return true;
}

