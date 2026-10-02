#include <iostream>
#include<string>
using namespace std;

    class student{
    private:
        int salary;
    public:
        string name;
        string id;
        string father;

        int  getsalary(int salarynew){
        salary=salarynew;
        cout<<"your salary is "<<endl;
        return salary;
        }




    };
int main()
{
    student t1;
    cout<<"Enter your name"<<endl;
    cin>>t1.name;
    cout<<endl;
    cout<<"Enter your id"<<endl;
    cin>>t1.id;
    cout<<endl;
    cout<<"Enter your father name"<<endl;
    cin>>t1.father;
    cout<<endl;
    int salaryy=5000;

    cout<<t1.getsalary(salaryy);



    return 0;
}