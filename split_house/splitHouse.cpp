#include <iostream>

using namespace std;

int main() {

    int n,h=0;
    cin>>n;
    char v[n];

    for (int i = 0; i < n; i++)
    {
        cin>>v[i]; //taking input
        if( v[i]=='H') //checking if its a House
        {
            h+=1; //keeping track of house
        }
        else
        {
            h=0;
        }
        /*if h will be more than 1. i.e. consecutive entry of Houses which is voilation of 1st condtion.
         * No space between two houses*/
        if(h>1)
        {
            cout<<"NO";
            return 0;
        }
        if(v[i]=='.')
        {
            v[i]='B';
        }
    }

    cout<<"YES"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
}
