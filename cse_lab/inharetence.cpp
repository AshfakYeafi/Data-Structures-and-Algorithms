#include <iostream>
using namespace std;

class Class_1
{
    public:
        Class_1(){
            cout<<"This is Class 1"<<endl;
        }
        Class_1(int a){
            cout<<"This is Class 1_1"<<endl;
        }

};

class Class_2:public Class_1(int a)
{
    public:
        Class_2(){
            cout<<"This is Class 2"<<endl;
        }

};


int main()
{
    Class_2 obj(4);
    return 0;
}
