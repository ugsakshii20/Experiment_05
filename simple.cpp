#include <iostream>
#include<string>
using namespace std;

class Employee
{
    public:
    string name;
    int age;
    int salary;

    void getdata()
    {
        cout<<"Enter name of the employee:"<<endl;
        cin>>name;
        cout<<"Enter age of the employee:"<<endl;
        cin>>age;
        cout<<"Enter salary of the employee:"<<endl;
        cin>>salary;
    }
    void displaydata()
    {
        cout<<"Employee name:"<<name<<endl;
        cout<<"Employee age:"<<age<<endl;
        cout<<"Employee salary:"<<salary<<endl;
    }
};
int main()
{
    Employee employee[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Details for Employee"<<i+1<<endl;
        employee[i].getdata();
    }
    cout<<"Employee Details are:"<<endl;
    for(int i=0;i<5;i++)
    {
        employee[i].displaydata();
    }
    return 0;
}
