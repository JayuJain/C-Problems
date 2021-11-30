#include <iostream>
using namespace std;
class ten{
public:
    int bill, Total_bill;
    void Tax_on_bill(){
        cout << "The tax on bill is " << bill * 10 / 100 << endl;
    }
};
class twenty : public ten{
public:
    void Tax_on_bill(){
        cout << "The tax on bill is " << bill * 20 / 100 << endl;
    }
    void Generate_Final_Bill(){
        cout << "The final bill is " << Total_bill << endl;
    }
};
int main(){
    ten t;
    t.bill = 100;
    t.Tax_on_bill();
    twenty t2;
    t2.bill = 100;
    t2.Tax_on_bill();
    t2.Total_bill = t2.bill + t2.bill * 20 / 100;
    t2.Generate_Final_Bill();
    return 0;
}
