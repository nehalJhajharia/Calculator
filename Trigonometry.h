// Header file for Trigonometric functions

// Display Commands for Trigonometry
void triCommands()
{
    cout << "s     -     sin(a)\n"
         << "c     -     cos(b)\n"
         << "t     -     tan(a)\n"
         << "S     -     sec(a)\n"
         << "C     -     cosec(a)\n"
         << "T     -     cot(a)\n"
         << "?     -     See Trigonometry Commands\n"
         << "ESC   -     END\n";
}

// Convert degree/s to number
float DegtoNum(float deg)
{
    deg = (deg*PI) / 180;
    return deg;
}

// Trigonometry
void Trigonometry()
{
    char key2 ('\0');
    triCommands();
    separate('-');

    while (key2 != ESC)
    {
        cout << "Select an action for Exponent : ";
        cin >> key2;

        switch (key2)
        {
        case 's': // sin
            cout << "a (degrees) : ";
            cin >> a;
            cout << "sin(" << a << ") = ";
            a = DegtoNum(a);
            cout << sin(a) << "\n";
            separate('-');
            break;

        case 'c': // cos
            cout << "a (degrees) : ";
            cin >> a;
            cout << "cos(" << a << ") = ";
            a = DegtoNum(a);
            cout << cos(a) << "\n";
            separate('-');
            break;

        case 't': // tan
            cout << "a (degrees) : ";
            cin >> a;
            cout << "tan(" << a << ") = ";
            a = DegtoNum(a);
            cout << tan(a) << "\n";
            separate('-');
            break;

        case 'S': // sec
            cout << "a (degrees) : ";
            cin >> a;
            cout << "sec(" << a << ") = ";
            a = DegtoNum(a);
            cout << 1/cos(a) << "\n";
            separate('-');
            break;

        case 'C': // cosec
            cout << "a (degrees) : ";
            cin >> a;
            cout << "cosec(" << a << ") = ";
            a = DegtoNum(a);
            cout << 1/sin(a) << "\n";
            separate('-');
            break;

        case 'T': // cot
            cout << "a (degrees) : ";
            cin >> a;
            cout << "cot(" << a << ") = ";
            a = DegtoNum(a);
            cout << 1/tan(a) << "\n";
            separate('-');
            break;

        case '?': // Display Trigonometry Commands
            separate('-');
            triCommands();
            separate('-');
            break;

        case ESC: // Exit Trigonometry
            break;

        default:
            separate('-');
            cout << "Oops! No action for " << key2 << ".\n";
            separate('-');
            break;
        }
    }
}