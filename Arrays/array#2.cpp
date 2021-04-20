// Program to Move all zero elements at the end
#include <iostream>
using namespace std;


//Function to move zeroes at the end
void moveZeroesToEnd(int arr[], int n)
{
    //initialize count variable 
    int count = 0;

    //Iterate through each element
    for (int i = 0; i < n; i++)
    {

        //if value is non-zero
        if (arr[i] != 0)
        {
            //Put the non-zero value in array with count variable as its index
            //and increment the value of count
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        //Assign all other values equal to zero
        arr[count++] = 0;
    }
}

int main()
{
    int n, arr[1000];
    //input no. of elements of array
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //input elements
        cin >> arr[i];
    }
    //call the function to move all zero values at the end
    moveZeroesToEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        //print elements
        cout << arr[i] << " ";
    }
    return 0;
}
