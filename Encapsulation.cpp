#include <iostream>
using namespace std;
class Adder
{
    private:
    int Total = 0;

    public:
    int m;
    Adder()
    {
        m = 0;
    }
    void addMarks(int marks)
    {
        Total += marks;
    }
    int getTotal()
 {
        m = Total;
        return m;
    }
};
int main()
{
    Adder obj;
    int mark = 0;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter the marks in subject "<<i + 1<<" : ";
        cin>>mark;
        obj.addMarks(mark);
    }
    cout<<"The total marks are: "<<obj.getTotal()<<"\n";
    return 0;
}
