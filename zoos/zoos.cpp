#include <iostream>
using namespace std;
int main() {

    string str;
    int zCount=0, oCount=0;
    getline(cin, str);

    if(str.length() <= 20)
    {
        for(unsigned long i=0;i<str.length();i++)
        {
            if(str[i] == 'z')
            {
                zCount++;
            }
            else if(str[i] == 'o')
            {
                oCount++;
            }
        }
        if(2*zCount == oCount)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        return 0;
    }
    cout << "No" << endl;
    return 1;
}


