#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    Student(string name,string roll,string phone,string address)
    {
setDetails(name,roll,phone,address);
    }
    void setDetails(string name,string roll,string phone,string address)
    {
        studentName=name;
        studentRoll=roll;
        studentPhone=phone;
        studentAddress=address;
    }
    string getDetails()
    {
        cout<<studentName<<endl;
        cout<<studentRoll<<endl;
        cout<<studentPhone<<endl;
        cout<<studentAddress<<endl;
    }
    private:
        string studentName;
        string studentRoll;
        string studentPhone;
        string studentAddress;

};
int main()
{
   Student student1("Sam","P101/1358G/18","0722925016","P.O BOX 30-2345");
   Student student2("John","P108/1234G/18","0734674017","P.O BOX 45-01001");
   cout<<student1.getDetails()<<endl;
   cout<<student2.getDetails()<<endl;

return 0;
}
