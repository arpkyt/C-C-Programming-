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
            cout << "You guessed it in " << tryNum << " tries!" << endl;
            break;
        }
        else
        {
            cout << "Wrong guess, try again." << endl;
            tryNum++;
        }
    }


}