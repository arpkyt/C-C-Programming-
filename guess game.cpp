#include <iostream>
using namespace std;
int main()
{
    char c;
    int tryNum = 1;
    do
    {
        cout << "Please enter a character: ";
        cin >> c;
        if (c == 'a')
        {
            cout << "You guessed it in ";
            tryNum = 6;

}
else
tryNum = tryNum+1;
    } while (tryNum <= 5);