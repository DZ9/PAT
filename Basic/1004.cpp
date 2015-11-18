#include <iostream>
#include <string>

using namespace std;
struct student {
    string name;
    string num;
    int score;
};
void printStruct(student &stu);
int main() {
    int n;
    cin>>n;
    int maxScore = -1;
    int minScore = 999;
    int maxStu = -1;
    int minStu = -1;
    student stu[n];
    int m = n;
    while(n--) {
        cin>>stu[n].name>>stu[n].num>>stu[n].score;
    }
    for(int i = 0; i < m; i++) {
        if(stu[i].score > maxScore) {
            maxStu = i;
            maxScore = stu[i].score;
        }

        if(stu[i].score < minScore) {
            minStu = i;
            minScore = stu[i].score;
        }
    }
    if(maxStu != -1 && minStu != -1) {
         printStruct(stu[maxStu]);
         printStruct(stu[minStu]);
    }


    return 0;
}

void printStruct(student &stu) {
    cout<<stu.name<<" "<<stu.num<<endl;
}
