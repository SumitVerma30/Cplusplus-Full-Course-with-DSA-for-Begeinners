// Dynamic Initialization of objects using constructors.
#include <iostream>
using namespace std;

class BankDeposit{
    private:
        int principal;
        int years; 
        float interestRate;
        float returnValue;

    public:
        BankDeposit (){}
        BankDeposit (int p, int y, float r);
        BankDeposit (int p, int y, int r);
        void show ();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1+r);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++){
        returnValue = returnValue * (1+i);
    }
}
void BankDeposit :: show () {
    cout << "Principal amount: " << principal << endl << "Return value after " << years << " years is " << returnValue << endl;
}
int main() {
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, r: " <<endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit (p, y, r);
    bd1.show();

    cout << "Enter the value of p, y, R: " <<endl;
    cin >> p >> y >> R;
    bd1 = BankDeposit (p, y, R);
    bd1.show();

    return 0;
}
