#include <iostream>
#include <math.h>

using namespace std;

#define ESC 27
#define E 2.71828
#define PI 3.14159

// Some essential variables
float a {0};
float b {0};
long int num {0};

// Extra Header Files
#include "Functions.h"
#include "Exponent.h"
#include "Logarithm.h"
#include "Trigonometry.h"

// MAIN
int main()
{
    char key {'\0'};

    separate('#');
    commands();
    separate('*');

    while (key != ESC)
    {
        cout << "Select an action : ";
        cin >> key;

        switch (key)
        {
        case '+': // Add
            twoInput();
            cout << a << " " << key << " " << b << " = " << a+b << "\n";
            separate('*');
            break;

        case '-': // Subtract
            twoInput();
            cout << a << " " << key << " " << b << " = " << a-b << "\n";
            separate('*');
            break;

        case '*': // Multiply
            twoInput();
            cout << a << " " << key << " " << b << " = " << a*b << "\n";
            separate('*');
            break;

        case '/': // Divide
            twoInput();
            cout << a << " " << key << " " << b << " = " << a/b << "\n";
            separate('*');
            break;

        case '%': // Percentage
            twoInput();
            cout << a << " is " << (a/b)*100 << "%" << " of " << b << "\n";
            separate('*');
            break;

        case '!': // Factorial
            cout << "Number : ";
            cin >> num;
            cout << num << "! = ";
            Factori();
            cout << num << "\n";
            separate('*');
            break;
        
        case 'd': // Number to Degrees
            cout << "Number : ";
            cin >> a;
            cout << a << " = " << (a*180) / PI << " degree/s\n";
            separate('*');
            break;
        
        case 'n': // Degrees to Number
            cout << "Degree/s : ";
            cin >> a;
            cout << a << " degree/s" << " = " << (a*PI) / 180 << "\n";
            separate('*');
            break;
        
        case 'f': // Celcius to Fahrenheit
            cout << "C : ";
            cin >> a;
            cout << a << " degree Celcius = " << (1.8*a) + 32 << " degree Fahrenheit\n";
            separate('*');
            break;
        
        case 'c': // Fahrenheit to Celcius
            cout << "F : ";
            cin >> a;
            cout << a << " degree Fahrenheit = " << (a-32) / 1.8 << " degree Celcius\n";
            separate('*');
            break;
        
        case 't': // Trigonometry
            separate('*');
            Trigonometry();
            separate('*');
            break;
        
        case 'l': // Logarithm
            separate('*');
            Log();
            separate('*');
            break;
        
        case '^': // Exponent
            separate('*');
            Exponent();
            separate('*');
            break;
        
        case '?': // Display Commands
            separate('*');
            commands();
            separate('*');
            break;
        
        case ESC: // END
            separate('*');
            cout << "Thank You :)\n";
            separate('#');
            break;
        
        default:
            cout << "Oops! No action for " << key << ".\n";
            break;
        }
    }

    return 0;
}

