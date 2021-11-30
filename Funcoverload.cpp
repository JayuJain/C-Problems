#include <iostream>
using namespace std;
class Add
{
    public:
    int sum(int num1, int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
    int sum(int num1, int num2, int num3)
    {
        int sum = num1 + num2 + num3;
        return sum;
    }
};
int main()
{
    Add obj;
    int n, a, b, c;
 cout<<"Enter the number of terms to sum (2 or 3): ";
    cin>>n;
    if(n == 2)
    {
        cout<<"Enter the terms: ";
        cin>>a>>b;
        int sum = obj.sum(a, b);
        cout<<"The sum is: "<<sum<<"\n";
    }
    if(n == 3)
    {
        cout<<"Enter the terms: ";
        cin>>a>>b>>c;
        int sum = obj.sum(a, b, c);
        cout<<"The sum is: "<<sum<<"\n";
    }
}
