#include<iostream>
using namespace std;
class Construct 
{
    public:
    int a,b;
    Construct()
    {
        a=10;
        b=20;
    }
};
int main()
{
    Construct c;
    cout<<c.a<<endl<<c.b;
}
/* OUTPUT 
10
20
*/      