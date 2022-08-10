#include <iostream>
using namespace std;
/* *
 * @param array and size
 * fill the array with user input
 * */
void takeInput(int array[],int size)
{
    string str="";
    for(int i=0;i<size;i++)
    {
label:
        cin >> str;
        try {
            array[i] = stoi(str);
        } catch (exception e) {
            cerr << "Not a integer. Please enter an integer." << endl;
            goto label;
        }
    }
}
/* *
 * @param array and size
 * sort the array in ascending order
 * */
void sortArrayAscending(int array[],int size)
{
    for(int j=0;j<size;j++)
    {
        for(int k=0;k<size;k++)
        {
            if(array[j] >= array[k])
            {
                continue;
            }
            else if(array[j] < array[k])
            {
                int temp = array[j];
                array[j]=array[k];
                array[k]=temp;
            }
        }
    }
}

/* *
 * @param array and size
 * display first to mid of array and then last to mid of array
 * */
void displayArray(int array[],int size)
{
    for (int i = 0,j=size-1; i < size; i++)
    {
        if(i<(size/2))
        {
            cout << array[i];
        }
        else
        {
            cout << array[j];
            j--;
        }

        if(i!=size-1)
            cout << ",";
    }
}
int main()
{
    int size = 0;
    cout << "Enter number of elements in array: " << "\t";
    cin >> size;
    if(size ==0)
    {
        cout << "Zero elements cannnot be stored" << endl;
        return -1;
    }
    int array[size];

    takeInput(array, size);
    sortArrayAscending(array, size);
    displayArray(array, size);
    cout << endl;
    return 0;
}
