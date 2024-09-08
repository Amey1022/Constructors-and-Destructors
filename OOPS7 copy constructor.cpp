#include <iostream>
using namespace std;
class Wall
{
    double length;
    double height;
    public:
    Wall(double len, double hgt)
    {
        length=len;
        height=hgt;
    }
    Wall(Wall &obj)
    {
        length=obj.length;
        height=obj.height;
    }
    double Area()
    {
        return length*height;
    }
};
int main()
{
    Wall wall1(10.5,8.6);
    Wall wall2=wall1;
    cout<<"Area of wall 1 ="<<wall1.Area()<<endl;
    cout<<"Area of wall 2 ="<<wall2.Area()<<endl;
}
/*OUTPUT
Area of wall 1 =90.3
Area of wall 2 =90.3
*/