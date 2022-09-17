#include <iostream>

using namespace std;

int main()
{
    int width;
    cout << "Enter a width for your ramp: ";
    cin >> width;
    // right ramp
    // prints rows so it's columns
    for (int j = 1; j < width; j++)
    {
        //print spaces
        int counter = 0;
        for (int i = 0; i < width-j; i++)
        {   
            cout << " ";
            counter ++;
        }
        //print fist chunk of hashes 
        for (int e = 0; e < width - counter; e++ )
        {
            cout << "#";
        }
        // prints row
        cout << " ";
        for (int i = 0; i < j; i++)
        {
            cout << "#";
        }
        cout << "\n";
    }
}
