#include <iostream>
using namespace std;
class Shape
{
    public:
    int shapeId;
};

class Rectangle : public Shape
{
    public:
    int area;

    Rectangle()
    {
        area = 0;
    }
        void calArea(int a, int b)
    {
        area = a * b;
    }
    void print()
    {
        cout<<"-----------------------------------\n";
        cout<<"The rectangle id is: "<<shapeId<<"\n";
        cout<<"The area is: "<<area<<"\n";
    }
};
int main()
{
    int l,b;
    Rectangle obj;
    cout<<"Enter the rectangle id: ";
    cin>>obj.shapeId;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<"Enter the breadth : ";
    cin>>b;
    obj.calArea(l, b);
    obj.print();
}
