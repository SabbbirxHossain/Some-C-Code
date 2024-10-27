
//Problem-1: Find the maximum element in a finite sequence of input.

#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter number of element: ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout << "Element " << i+1 << " : ";
        cin >> arr[i];
    }

    for(i=1;i<n;i++)
    {
        if(arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
     cout << endl << "Largest element is = " << arr[0];
    return 0;
}
