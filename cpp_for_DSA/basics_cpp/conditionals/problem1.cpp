
#include <iostream>
using namespace std;
int main()
{
    float costPrice;
    cout << "enter cost price : ";
    cin >> costPrice;
    float sellingPrice;
    cout << "enter selling price : " << endl;
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
    {
        cout << sellingPrice << " has made profits" << endl;
        cout << "How much profit has been made: " << sellingPrice - costPrice << endl;
        float profit_percent= sellingPrice/costPrice*100;
        cout << profit_percent <<  "is the profit percentage !";
    }
    else if (sellingPrice < costPrice)
    {
        cout << sellingPrice << " has made losses" << endl;
        cout << "How much loss has been made: " << costPrice - sellingPrice << endl;
        float loss_percent= costPrice/sellingPrice*100;
        cout <<loss_percent <<"is the loss percentage";
    }
    else
    {
        cout << "Cost price is equal to selling price, so no profits made and no losses." << endl;
    }
    
}