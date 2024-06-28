#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char input[])
{
    int len = length(input);
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char input[100];
    // cin >> input;
    cin.getline(input, 100);
    // cin.getline(input, 4); it will take only 3 character only
    reverseString(input);
    cout << input << endl;
}

int main()
{
    char input[100];
    cin.getline(input, 100);
    
}