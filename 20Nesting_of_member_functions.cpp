// Nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
};
void binary ::read()
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary number. Please enter again." << endl;
            exit(0);
        }
    }
}

int main()
{
    // Nesting of member functions
    binary b;
    b.read();
    b.chk_bin();

    return 0;
}