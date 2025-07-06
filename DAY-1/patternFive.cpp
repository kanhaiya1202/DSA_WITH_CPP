/*
    Dabangg pattern

    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int count = 1;
        int FirstTriangle = n - i + 1;
        while (FirstTriangle)
        {

            cout <<" "<<count;
            count++;
            FirstTriangle = FirstTriangle - 1;
        }
        int j = 2;
        while (j <= i)
        {
            cout <<" *";
            j++;
        }
        int SecondTriangle = 2;
        while (SecondTriangle <= i)
        {
            cout <<" *";
            SecondTriangle++;
        }

        int threeTriangle = n - i + 1; // Numbers after stars in reverse
        while (threeTriangle > 0)
        {
            cout<<" "<<threeTriangle;
            threeTriangle--;
        }

        cout << endl;

        i++;
    }
}