#include <iostream>
#include <string>
using namespace std;
int judge(string &str);
bool isCorrect(string &str,int head,int tail); //�ж�ͷβ�Ƿ���Ϲ���

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
    int head = str.find('P',0); //�ҵ�P��T��λ��
    int tail = str.find('T',0);
    if(tail - head == 1) {  //���PT֮��û��A�����ش���
        return 0;
    }
    return isCorrect(str,head,tail)?1:0;
}

bool isCorrect(string &str,int head,int tail) {
    for(int i = 0; i < str.length(); i++) {

        if(str[i] != 'A' && i != head && i != tail ) { //�жϳ�PT�����������Ƿ�ΪA
            return false;
        }
    }
    int frontcount = head;
    int backcount = str.length() - tail - 1;
    if((tail - head -1)*frontcount == backcount) { //T�ұ�A������ΪP���A������������������ΪPT֮��A�ĸ���
        return true;
    }
    return false;
}
