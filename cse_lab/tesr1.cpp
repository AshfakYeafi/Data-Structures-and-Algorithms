#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;

    void display()
    {
        cout << "Name is : " << name << " Roll is : " << roll << endl;
    }
};
int main()
{
    Student *stu = new Student[3];

    *stu.name = "Rahim";
    *stu.roll = 01;
    *stu.display();
    stu++;
    *stu.name = "Karim";
    *stu.roll = 02;
    *stu.display();

    return 0;
}
