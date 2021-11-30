#include <iostream>
using namespace std;
class Distance
{
    public:
    int distance;
    Distance()
    {
        distance = 0;
    }
    Distance(int f, int i)
    {
        distance = f - i;
        if(distance < 0)
        {
            distance  = distance * (- 1);
        }
    }
    void print()
    {
        cout<<"The total distance travelled is: "<<distance<<"\n";
    }
    Distance operator + (Distance d)
    {
        Distance temp;
        temp.distance = distance + d.distance;
        return temp;
    }
};
int main()
{
    Distance d1(2, 6);
    Distance d2;
    Distance d3 = d1 + d2;
    d3.print();
    d1.print();
    d2.print();
}

