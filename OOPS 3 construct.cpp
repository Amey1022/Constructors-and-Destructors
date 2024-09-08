#include <iostream>
using namespace std;
class Date
{
    int d;
    int m;
    int y;
    
    public:
    date()
    {
        cout<<"Constructor called"<<endl;
        d=4;
        m=9;
        y=2024;

    }
    void display()
    {
        cout<<d<<"/"<<"/"<<m<<"/"<<y;
    }

};
int main()
{
    date today;
    today.display();
}
/* OUTPUT
Constructor called
4//9/2024
*/