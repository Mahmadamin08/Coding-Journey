#include <iostream>
using namespace std;

int linearSearch(int n, int arr[], int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
 
 cout<< linearSearch(n, arr, key);
    return 0;
}