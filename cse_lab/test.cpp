
#include <iostream>
#define N 3
using namespace std;

class Student
{
	string name;
	int roll, batch;
	bool isMale;

public:
	Student()
	{
	}

	~Student()
	{
		cout << "Object is Deleted...\n";
	}

	void setData(string name, int roll, int batch, bool isMale)
	{
		this->name = name;
		this->roll = roll;
		this->batch = batch;
		this->isMale = isMale;
	}
	void showInfo()
	{
		cout << "Student name is: " << name << endl;
		cout << "Student roll is: " << roll << endl;
		cout << "Student batch is: " << batch << endl;
		cout << "Student is: " << (isMale ? "Male" : "Female");
		cout << endl
			 << "\n---------!!!!!----------\n"
			 << endl;
	}
};

int main()
{

	Student *student = new Student[N];

	string name[N] = {"Niloy", "Fahim", "Supta"};
	int roll[N] = {22, 49, 54};
	bool isMale[N] = {true, true, false};

	for (int i = 0; i < N; i++)
	{
		student[i].setData(name[i], roll[i], 2018, isMale[i]);
	}

	for (int i = 0; i < N; i++)
	{
		student[i].showInfo();
	}
	delete[] student;
	return 0;
}
