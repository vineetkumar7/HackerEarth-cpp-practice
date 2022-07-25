/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
using namespace std;

int main(){
    int testcases=0,rows=0,columns=0, answer=0;
    cin>>testcases;
    while(testcases--)
    {
        cin>>rows>>columns;
        char array[rows][columns];

        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<columns; j++)
            {
                cin>>array[i][j];
            }
        }
        answer=0;
        for(int i=0; i<rows; i++)
        {
            int count = 0;
            for(int j=0; j<columns; j++)
            {
                if(array[i][j] == '#')
                {
                    count++;
                }
                else
                {
                    continue;
                }
            }
            if(count > answer) answer = count;
        }
        cout<<answer<<endl;
    }
}
