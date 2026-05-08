// CA Assignment: Diamond Shape Program
// Student: Njuh Meh Bomi Ndashi 
#include <iostream>
using namespace std;
// Function to print the diamond shape
void printDiamond(int rows)
{
    // Upper half of the diamond
    for (int upper = 1; upper <= rows; upper++)
    {
        // Print spaces
        for (int space = 1; space <= rows - upper; space++)
        {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= (2 * upper - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int upper = rows - 1; upper>= 1; upper--)
    {
        // Print spaces
        for (int space = 1; space <= rows - upper; space++)
        {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= (2 * upper - 1); star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int sizeValue;
    // Asking for the diamond size
    cout << "Enter the number of rows for the upper half: ";
    cin >> sizeValue;
    // Calling the function
    printDiamond(sizeValue);
    return 0;
}