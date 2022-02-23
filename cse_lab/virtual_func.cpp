#include <iostream>
using namespace std;

class BaseClass
{

public:
    int baseVar = 1;
    virtual void show()
    {
        cout << "This is Base Class " << endl;
    }
};

class DriverClass : public BaseClass
{

public:
    int driveVar = 2;
    void show()
    {
        cout << "This is Drived Class" << endl;
    }
};

int main(int argc, char const *argv[])
{
    BaseClass *basePtr;
    DriverClass driveObj;
    basePtr = &driveObj;
    basePtr->show();

    return 0;
}
