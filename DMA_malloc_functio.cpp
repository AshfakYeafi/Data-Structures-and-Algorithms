
//Use Malloc fucntion for dynamically allocate memory for structure datatype

#include<stdio.h>
#include<stdlib.h>  //libary for malloc()

struct Emp         //User defined datatype
{
    int e_no;
    char e_name[20];
    float e_sal;
};

int main(){
    struct Emp* ptr;   //Use ptr variable for storing user defined data type's(struct Emp) pointer
    ptr=(struct Emp*) malloc(sizeof(struct Emp));  //malloc() take 1 argument-> size of allocated memory 
                                                    //and return void type pointer.So we need to typecast malloc()
    printf("Enter The No,Name,Salary of the Employ: ");
    scanf("%d %s %f",&ptr->e_no,ptr->e_name,&ptr->e_sal); // for passing pointer in strucutre we use "->"(arrow) operaotr
    printf("Emp No: %d\nEmp Name: %s\nEmp Salary: %.2f\n",ptr->e_no,ptr->e_name,ptr->e_sal);
    return 0;
}
