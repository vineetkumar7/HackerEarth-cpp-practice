#include <iostream>

using namespace std;

int main() {

    int testcases=0;
    cin>>testcases;

    for (int i = 0; i < testcases; i++)
    {
        int greenBcost=0, blueBCost=0, participants = 0;

        cin >> greenBcost;
        cin >> blueBCost;
        cin >> participants;

        int totalGB=0, totalBB = 0;

        for(int j=0;j<participants*2;j++)
        {
            int input=0;
            cin >> input;
            if(input ==0)
                continue;

            if(j%2==0)
                totalGB++;
            else
                totalBB++;
        }
        int costPrice1 = (totalGB*greenBcost) + (totalBB*blueBCost);
        int costPrice2 = (totalGB*blueBCost) + (totalBB*greenBcost);

        if(costPrice1 > costPrice2)
            cout << costPrice2 << endl;
        else
            cout << costPrice1 << endl;

    }
}
