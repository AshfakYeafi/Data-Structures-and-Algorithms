#include<iostream>
using namespace std;

class Student{
    public:
        Student(string name){
            cout<<name<<endl;
        }

};

int main()
{
    Student *stu[5];

    for(int i=0;i<5;i++){
        stu[i]=new Student("Fahim");
    }
    return 0;
}
