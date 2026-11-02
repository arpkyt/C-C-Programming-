char c;
int tryNum = 1;
maxTries = 5;
cout << "Please enter a character from a to z: ";
cin >> c;
while ((tryNum <= maxTries) && (c != 'a'))
{
    cout << "Incorrect guess. Please try again: ";
    cin >> c;
    tryNum+1;
}