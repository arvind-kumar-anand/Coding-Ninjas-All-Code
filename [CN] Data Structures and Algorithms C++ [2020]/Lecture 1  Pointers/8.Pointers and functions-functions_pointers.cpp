#include <iostream>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}
void incrementPointer(int *p)
{
    p = p + 1;
    cout << p << endl; // DIFFERENT ADDRESS AS PASS BY VALUES (COPY)
}
void increment(int *p)
{
    (*p)++;
    cout << *p << endl; // 11 BECAUSE VALUE WILL BE CHANGED IN THE MAIN ADDRESS PLACE
}
int main()
{
    int i = 10;
    int *p = &i;

    print(p);

    cout << p << endl; // SAME ADDRESS
    incrementPointer(p);
    cout << p << endl; // SAME ADDRESS

    cout << *p << endl; // 10
    increment(p);
    cout << *p << endl; // 11 BECAUSE VALUE WILL BE CHANGED IN THE MAIN ADDRESS PLACE
}