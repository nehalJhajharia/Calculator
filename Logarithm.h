// Header File for Logarithm functions

// Display Commands for Logarithm
void logCommands()
{
    cout << "e     -     ln (a)\n"
         << "t     -     log 10 (a)\n"
         << "b     -     log b (a) \n"
         << "?     -     See Logarithm Commands\n"
         << "ESC   -     END\n";
}

// Logarithm
void Log()
{
    char key2 ('\0');
    logCommands();
    separate('-');

    while (key2 != ESC)
    {
        cout << "Select an action for Logarithm : ";
        cin >> key2;

        switch (key2)
        {
        case 'e': // ln (a)
            cout << "a : ";
            cin >> a;
            if (a <= 0)
            {
                cout << "Argument or Base cannot be negative or 0!!\n";
                separate('-');
                break;
            }
            cout << "ln (" << a << ") = " << log(a) << "\n";
            separate('-');
            break;

        case 't': // log 10 (a)
            cout << "a : ";
            cin >> a;
            if (a <= 0)
            {
                cout << "Argument or Base cannot be negative or 0!!\n";
                separate('-');
                break;
            }
            b = log(a) / log(10);
            cout << "log 10 (" << a << ") = " << b << "\n";
            separate('-');
            break;

        case 'b': // log b (a)
            twoInput();
            if (a <= 0 || b <= 0)
            {
                cout << "Argument or Base cannot be negative or 0!!\n";
                separate('-');
                break;
            }
            if (b == 1)
            {
                cout << "Base cannot be 1!!\n";
                separate('-');
                break;
            }
            cout << "log " << b << " (" << a << ") = ";
            b = log(a) / log(b);
            cout << b << "\n";
            separate('-');
            break;

        case '?': // Display Logarithm Commands
            separate('-');
            logCommands();
            separate('-');
            break;

        case ESC: // Exit Logarithm
            break;

        default:
            separate('-');
            cout << "Oops! No action for " << key2 << ".\n";
            separate('-');
            break;
        }
    }
}