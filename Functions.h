// Header File to contain Basic Functions

// Create a ruler to separate sections
void separate(char type)
{
    cout << "\n";
    for (int i (0); i < 50; i++)
    {
        cout << type;
    }
    cout << "\n\n";
}

// Display Commands
void commands()
{
    cout << "+     -     Add\n" 
         << "-     -     Subtract\n"
         << "*     -     Multiply\n"
         << "/     -     Divide\n"
         << "%     -     Percentage\n"
         << "!     -     Factorial\n"
         << "d     -     Number to Degrees\n"
         << "n     -     Degrees to number\n"
         << "f     -     Celcius to Fahrenheit\n"
         << "c     -     Fahrenheit to Celcius\n"
         << "t     -     Trigonometry\n"
         << "l     -     Logarithm\n"
         << "^     -     Exponent\n"
         << "?     -     See Commands\n"
         << "ESC   -     END\n";
}

// Input for 2 variables
void twoInput()
{
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
}

// Factorial
void Factori()
{
    if (num <= 1)
    {
        num = 1;
        return;
    }

    int temp = num;
    while (temp > 1)
    {
        temp = temp - 1;
        num *= temp;
    }
}