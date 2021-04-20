//Split the array and add the first part to the end
#include <iostream>
using namespace std;

void splitArray(int arr[], int n, int position)
{

    for (int i = 0; i < position; i++)
    {
        int x = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = x;
    }
}

int main()
{
    int n, position, arr[1000];
    //input no. of elements of array
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //input elements
        cin >> arr[i];
    }
    //Input the no. places you want to split
    cin >> position;
    if (position > n)
    {
        cout << "No. of places to split is greater than Array size";
        return 0;
    }

    splitArray(arr, n, position);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
