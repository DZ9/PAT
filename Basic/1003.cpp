#include <iostream>
#include <string>
using namespace std;
int judge(string &str);
bool isCorrect(string &str,int head,int tail); //判断头尾是否符合规则

int main() {
    int n,m;
    cin>>n;
    m = n;
    int result[n];

    while(n--) {
        string str;
        cin>>str;
        result[n] = judge(str);
    }
    for(int i = m-1; i >= 0; i--) {
        if(result[i] == 1) {
                cout<<"YES"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}

int judge(string &str) {
    int head = str.find('P',0); //找到P和T的位置
    int tail = str.find('T',0);
    if(tail - head == 1) {  //如果PT之间没有A，返回错误
        return 0;
    }
    return isCorrect(str,head,tail)?1:0;
}

bool isCorrect(string &str,int head,int tail) {
    for(int i = 0; i < str.length(); i++) {

        if(str[i] != 'A' && i != head && i != tail ) { //判断除PT外其他部分是否都为A
            return false;
        }
    }
    int frontcount = head;
    int backcount = str.length() - tail - 1;
    if((tail - head -1)*frontcount == backcount) { //T右边A的数量为P左边A数量的整数倍，倍数为PT之间A的个数
        return true;
    }
    return false;
}
