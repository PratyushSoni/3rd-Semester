                    /* ASSIGNMENT 3 - DATA STRUCTURES */
/* How would you search for an element in an array/list whose size is unknown? */


#include <bits/stdc++.h>
using namespace std;


/* Finding the index of the given element using linear search(array of unknown size is given) */
int linearSearch(int arr[], int x)
{
    for (int i = 0;; i++) 
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
}


/* Finding the index of the given element using linear search(array of unkown size is given) */
int binarySearch(int arr[], int x)
{
    int start = 0;
    int end = 1;

    while (arr[end] < x) /* If the element we want to find is greater than element at index high*/
    {
        start = end; /* Update the start value */
        end = 2 * end; /* Increment the end value by multiplying with 2 */
    }


    /* Performing binary search operation on updated start and end values */
    int mid = (start + end) / 2;
    while(start <= end)
    {
        if(arr[mid] > x)
        {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else if(arr[mid] < x)
        {
            start = mid + 1;
            mid = (start + end) / 2;
        }
        else
        {
            return mid;
        }
    }
    
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array(sorted)-> ";
    cin >> n;
    cout<<"Enter the array elements in sorted format-> ";
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int x;
    cout << "Enter the element to be found-> ";
    cin >> x;
    
    cout <<"Finding index using Linear Search: " << linearSearch(arr2, x) << endl;
    cout <<"Finding index using Binary Search: " << binarySearch(arr2, x) << endl;
}