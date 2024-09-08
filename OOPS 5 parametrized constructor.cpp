#include <iostream>
using namespace std;
class Pconstruct
{
    int a,b;
    public:
    Pconstruct(int m, int n)
    {
        a=m;
        b=n;
    }
    void display()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    Pconstruct numbers(10,20);
    numbers.display();
}
/*OUTPUT
a=10
b=20
*/