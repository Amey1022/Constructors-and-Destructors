#include <iostream>
using namespace std;
class Student
{
    int rno;
    char name[50];
    double fee;
    public:
    Student();
    void display();
};
Student::Student()
{
    cout<<"enter roll number:";
    cin>> rno;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter fees:";
    cin>>fee;
}
void Student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main()
{
    Student info;
    info.display();
}
/*OUTPUT
enter roll number:19
enter name:AMEY
enter fees:320000

19      AMEY    320000*/