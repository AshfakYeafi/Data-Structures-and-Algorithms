#include<iostream>
using namespace std;


class Student{

public:

    int a;
    string name;
    Student(){
        cout<<"This is cons"<<endl;
    }

    ~Student(){
        cout<<"This is dis"<<endl;
    }


};


int main()
{
    Student st;
    st.name="sddsfsdg";
    cout<<st.name<<endl;
    

}