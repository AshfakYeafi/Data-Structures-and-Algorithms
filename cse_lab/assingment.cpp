#include <iostream>
using namespace std;
#define N 5
class Student
{
public:
    int roll;
    float height;
    string name;
    Student() {}

    void show()
    {
        cout << "Name is :" << name << endl;
        cout << "Roll is :" << roll << endl;
        cout << "Height is :" << height << endl;
        cout << "-----------------!!!!!!!!!!!------------------" << endl;
    }
    ~Student(){
        cout<<"Obj is cleraed"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Student *stu = new Student[5];
    string name[5] = {"Name_1", "Name_2", "Name_3", "Name_4", "Name_5"};
    float height[5] = {5.12, 5.23, 5.45, 5.10, 5.8};
    for (int i = 0; i < 5; i++)
    {
        stu[i].name = name[i];
        stu[i].roll = i + 01;
        stu[i].height = height[i];
        stu[i].show();
    }
    delete[] stu;
    return 0;
}
