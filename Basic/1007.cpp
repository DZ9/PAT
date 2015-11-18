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
    定理: 如果n不是素数, 则n有满足1<d<=sqrt(n)的一个因子d.
    证明: 如果n不是素数, 则由定义n有一个因子d满足1<d<n.
    如果d大于sqrt(n), 则n/d是满足1<n/d<=sqrt(n)的一个因子.
    */

    for(int i = 2 ; i*i <= n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
     return true;
}

