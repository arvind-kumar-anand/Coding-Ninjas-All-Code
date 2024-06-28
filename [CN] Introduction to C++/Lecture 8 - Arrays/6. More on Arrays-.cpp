#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // Take array input from the user

    int input[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << endl;
    }

    // Largest velement in the array

    // int max = input[0]; // not valid for empty arrays as empty array will not have any index
    // int max = 0; // not valid for -ve numbers
    int max = INT_MIN; // minimum value or the lower limit
    // int max = INT_MAX; // maximum value of the upper limit

    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    cout << "Max : " << max << endl;
}