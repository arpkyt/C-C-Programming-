#include <iostream>
using namespace std;    
int main()
{
    cout << "Welcome to the Guessing Game!" << endl;
char c;
int tryNum = 1;

do
{
    cout << "Please enter your guess by pressing a character key from a to z: ";
    cin >> c;

    if (c == 'z')
    {
        cout << "Congratulations! You guessed the right character.";
        tryNum = 6;
    }
    else
    {
        tryNum = tryNum + 1;
    }

}
while (tryNum <= 5);
return 0;
}