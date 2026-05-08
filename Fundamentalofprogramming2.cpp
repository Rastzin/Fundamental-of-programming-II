// CA Assignment: Diamond Shape Program
// Student: Njuh Meh Bomi Ndashi 
#include <iostream>
using namespace std;
// Function to print the diamond shape
void printDiamond(int rows)
{
    // Upper half of the diamond
    for (int i = 1; i <= rows; i++)
    {
        // Print spaces
        for (int s = 1; s <= rows - i; s++)
        {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int i = rows - 1; i >= 1; i--)
    {
        // Print spaces
        for (int s = 1; s <= rows - i; s++)
        {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int sizeValue;
    // Ask user for the diamond size
    cout << "Enter the number of rows for the upper half: ";
    cin >> sizeValue;
    // Call the function
    printDiamond(sizeValue);
    return 0;
}