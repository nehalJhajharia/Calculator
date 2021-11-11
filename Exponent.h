// Header File for Exponent functions

// Display Commands for Exponent
void expCommands()
{
    cout << "e     -     e^b\n"
         << "s     -     Square\n"
         << "^     -     a^b\n"
         << "r     -     Square Root\n"
         << "n     -     nth Root\n"
         << "?     -     See Exponent Commands\n"
         << "ESC   -     END\n";
}

// Exponent
void Exponent()
{
    char key2 {'\0'};
    expCommands();
    separate('^');

    while (key2 != ESC)
    {
        cout << "Select an action for Exponent : ";
        cin >> key2;

        switch (key2)
        {
        case 'e': // e ^ b
            cout << "b : ";
            cin >> b;
            cout << "e ^ " << b << " = " << pow(E, b) << "\n";
            separate('^');
            break;

        case 's': // Square a number
            cout << "a : ";
            cin >> a;
            cout << a << " ^ 2 = " << pow(a, 2) << "\n";
            separate('^');
            break;

        case '^': // a ^ b
            twoInput();
            cout << a << " ^ " << b << " = " << pow(a, b) << "\n";
            separate('^');
            break;

        case 'r': // Square Root
            cout << "a : ";
            cin >> a;
            cout << "Square root of " << a << " = " << pow(a, (0.5)) << "\n";
            separate('^');
            break;

        case 'n': // nth Root
            cout << "a : ";
            cin >> a;
            cout << "n : ";
            cin >> b;
            cout << b << "th root of " << a << " = " << pow(a, (1/b)) << "\n";
            separate('^');
            break;

        case '?': // Display Exponent Commands
            separate('^');
            expCommands();
            separate('^');
            break;

        case ESC: // Exit Exponent
            break;

        default:
            separate('^');
            cout << "Oops! No action for " << key2 << ".\n";
            separate('^');
            break;
        }
    }
}