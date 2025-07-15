#include <iostream>
using namespace std;

int main()
{
    int a, b, n;
    cout << "Enter the number A:-" << endl;
    cin >> a;
    cout << "Enter the number B:-" << endl;
    cin >> b;
    cout << "___________________________________\n";
     
    cout << "1.Addition " << endl;
    cout << "2.Subtraction " << endl;
    cout << "3.Multiplication " << endl;
    cout << "4.Modulus" << endl;
    cout << "5.Division" << endl;
    cout << "___________________________________\n";
        
    cout << "Enter the Operation" << endl;
    cin >> n;
    cout << "___________________________________\n";
        
    switch (n)
    {
    case 1:
    {
        int ans = a + b;
        cout << "Addition:=> " << ans << endl;
        cout << "___________________________________\n";
           
    }
    break;
    case 2:
    {
        int ans = a - b;
        cout << "Subtraction:=> " << ans << endl;
        cout << "___________________________________\n";
        
    }
    break;
    case 3:
    {
        int ans = a * b;
        cout << "Multiplication:=> " << ans << endl;
        cout << "___________________________________\n";
            
    }
    break;
    case 4:
    {
        int ans = a % b;
        cout << "Modulus:=> " << ans << endl;
        cout << "___________________________________\n";
            
    }
     break;
    case 5:
    {
        int ans = a / b;
        cout << "Division:=> " << ans << endl;
        cout << "___________________________________\n";
            
    }
     break;
    default:
        cout << "It is not valid Operator " << endl;
        break;
    }
}