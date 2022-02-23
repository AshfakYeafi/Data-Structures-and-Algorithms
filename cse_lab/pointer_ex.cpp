#include <iostream>
using namespace std;

class BaseClass
{

public:
    int baseVar;

    void set(int a)
    {
        baseVar = a;
    }
    void show()
    {
        cout << "This is Base Class   " << baseVar << endl;
    }
};

class DrivedClass : public BaseClass
{

public:
    int drivedVar;

    void show()
    {
        cout << "This is Base Class in Derived class    " << baseVar << endl;
        cout << "This is Drived Class   " << drivedVar << endl;
    }
};

int main(int argc, char const *argv[])
{
    BaseClass *basePtr;
    DrivedClass *drivePtr;

    BaseClass baseObj;
    DrivedClass driveObj;

    basePtr = &driveObj;

    drivePtr = &driveObj;

    drivePtr->baseVar = 40;
    drivePtr->drivedVar = 69;

    drivePtr->show();
}
