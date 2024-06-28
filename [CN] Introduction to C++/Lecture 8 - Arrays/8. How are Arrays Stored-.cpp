#include <iostream>
#include <climits>
using namespace std;

void printArray(int input[], int n)
{
    // cout << sizeof(input); => 8 Bytes AS IT CREATES ARRAY WITH 0th ELEMENT ADDRESS ONLY
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Take array input from the user
    int input[100];
    int n;
    cin >> n;

    // cout << input; //ADDRESS OF FIRST ELEMENT
    cout << sizeof(input); //=> 400 Bytes AS IT HAS SIZE OF 100 ELEMENTS

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

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
    }

    cout << "Max : " << max << endl;
}