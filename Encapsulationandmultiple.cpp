#include <iostream>
using namespace std;
class Shape
{
    public:
    int shapeId;
};
class PaintCost
{
    private:
    int pcost;

    public:
    int cost;

    void calCost(int area, int price)
     {
        pcost = area * price;
        cost = pcost;
    }
};
class Rectangle : public Shape
{
    private:
    int area1;

    public:
    int area2;

    int calArea(int l, int b)
    {
        area1 = l * b;
        area2 = area1;
        return area2;
    }
};
class Wall : public Rectangle, public PaintCost
{
    public:
    void print(int x)
    {
        cout<<"-----------------------------";
        cout<<"\nArea of wall to be painted: "<<area2;
        cout<<"\nCost per metre-square of paint: Rs. "<<x;
        cout<<"\nTotal cost: Rs. "<<cost<<"\n";
    }
};
int main()
{
 int l, b, price;
    Wall obj;
    cout<<"Enter wall Id: ";
    cin>>obj.shapeId;
    cout<<"Enter the length and breadth of wall (in metres): ";
    cin>>l>>b;
    int area = obj.calArea(l, b);
    cout<<"Enter the cost per metre square: ";
    cin>>price;
    obj.calCost(area, price);
    obj.print(price);
}
