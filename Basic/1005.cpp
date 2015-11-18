#include <iostream>

using namespace std;

int main() {
    int result[101];
    int n;
    cin>>n;
    int m = n;
    int inputNum[n];

    //��ʼ������
    for(int i = 0; i < 101; i++) {
        result[i] = 0;
    }

    while(n--) {
        cin>>inputNum[n];
        int temp = inputNum[n];
        while(temp!=1) {
            if(temp%2 == 0) {
                temp/=2;
                if(temp <= 100) {
                    result[temp] = 1; //���������Ϊ���� ������ĿҪ��ֻ����100���ڵ���
                }
            }else {
                temp=3*temp+1;
                temp/=2;
                if(temp <= 100) {
                    result[temp] = 1; //���������Ϊ����
                }
            }
        }
    }


    //����ǹ�������Ϊ-1
    for(int i = 0; i < m; i++) {
        if(result[inputNum[i]] == 1) {
            inputNum[i] = -1;
        }
    }

    //�����������������
    for(int i = 0; i < m-1; i++) {
        for(int j = i+1; j < m; j++) {
            if(inputNum[i] < inputNum[j]) {
                int temp = inputNum[i];
                inputNum[i] = inputNum[j];
                inputNum[j] = temp;
            }
        }
    }


    //��ʽ�����
    for(int i = 0; i < m; i++) {
        if(inputNum[i] == -1) {
            break;
        }

        //�жϱ߽�
        if(i+1 == m) {
            cout<<inputNum[i];
        }else if(inputNum[i+1] == -1) {
            cout<<inputNum[i];
        }else {
            cout<<inputNum[i]<<" ";
        }
    }
}
