#include <iostream>
#include <climits>
#include <vector>
using namespace std;
const int m = 3;
const int n = 3;
void middleElements(int arr[m][n], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == m - 1)
            {
                if (j == 0 || j == n - 1)
                {
                    cout << arr[i][j];
                }
            }

            if (m / 2 == i && n / 2 == j)
            {
                cout << arr[i][j];
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
}

int main()
{

    int arr[m][n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = sizeof(arr) / sizeof(arr[0]);
    int y = sizeof(arr[0]) / sizeof(arr[0][0]);
    // cout<<x*y<<endl;
    middleElements(arr, m, n);
}