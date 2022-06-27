#include <iostream>
#include <limits>
using namespace std;

// 1 double
double multiplicationDouble(const double numFirstDouble, const double numSecondDouble)
{
    return numFirstDouble * numSecondDouble;
}
// 2 double
double divisionDouble(const double numFirstDouble, const double numSecondDouble)
{
    return numFirstDouble / numSecondDouble;
}
// 3 double
double subtractionDouble(const double numFirstDouble, const double numSecondDouble)
{
    return numFirstDouble - numSecondDouble;
}
// 4 double
double additionDouble(const double numFirstDouble, const double numSecondDouble)
{
    return numFirstDouble + numSecondDouble;
}

int multiplicationInt(const int numFirst, const int numSecond) // 1 int
{
    return numFirst * numSecond;
}

int divisionInt(const int numFirst, const int numSecond) // 2 int
{
    return numFirst / numSecond;
}

int subtractionInt(const int numFirst, const int numSecond) // 3 int
{
    return numFirst - numSecond;
}

int additionInt(const int numFirst, const int numSecond) // 4 int
{
    return numFirst + numSecond;
}

int modulusInt(const int numFirst, const int numSecond) // 5 int
{
    return numFirst % numSecond;
}

int calculatorOption()
{
    int calculatorOptions;
    cout << "\nWhat would like to use?" << endl
         << "(1) for Decimal Places" << endl
         << "(2) for Whole Numbers" << endl
         << "Input Choice here: ";

    while (!(cin >> calculatorOptions) || (calculatorOptions < 1 || calculatorOptions > 2))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvalid Option." << endl
             << "Input Choice Here: ";
    }

    return calculatorOptions;
}

double getUserOptionNumFirstDouble()
{
    double numFirstDouble;

    cout << "\nFirst number input: ";
    cin >> numFirstDouble;

    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid Input";
            cout << "\nTry again! (First Number): ";
            cin >> numFirstDouble;
        }
        else
            return numFirstDouble;
    }
}

int getUserOptionNumFirstInt()
{
    int numFirstInt;

    cout << "\nFirst number input: ";
    cin >> numFirstInt;

    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid Input";
            cout << "\nTry again! (First Number): ";
            cin >> numFirstInt;
        }
        else
            return numFirstInt;
    }
}

double getUserOptionNumSecondDouble()
{
    double numSecondDouble;

    cout << "\nSecond number input: ";
    cin >> numSecondDouble;

    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid Input";
            cout << "\nTry again! (Second Number): ";
            cin >> numSecondDouble;
        }
        else
            return numSecondDouble;
    }
}

int getUserOptionNumSecondInt()
{
    double numSecondInt;

    cout << "\nSecond number input: ";
    cin >> numSecondInt;

    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nInvalid Input";
            cout << "\nTry again! (Second Number): ";
            cin >> numSecondInt;
        }
        else
            return numSecondInt;
    }
}

double userOptionsListDouble()
{
    double userSelectedOptionDouble;
    cout << "\nWhat would you like to do?" << endl
         << "(1) for Multiplication" << endl
         << "(2) for Division" << endl
         << "(3) for Subtraction" << endl
         << "(4) for Addition" << endl
         << "Input Choice here: ";

    while (!(cin >> userSelectedOptionDouble) || (userSelectedOptionDouble < 1 || userSelectedOptionDouble > 4)) // Forces user to only put numbers between 1 to 4
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Forces user to only put integers and not letters
        cout << "\nInvalid Input";
        cout << "\nInput Choice here: ";
    }
    return userSelectedOptionDouble;
}

int userOptionsListInt()
{
    int userSelectedOptionInt;
    cout << "\nWhat would you like to do?" << endl
         << "(1) for Multiplication" << endl
         << "(2) for Division" << endl
         << "(3) for Subtraction" << endl
         << "(4) for Addition" << endl
         << "(5) for Modulus" << endl
         << "Input Choice here: ";

    while (!(cin >> userSelectedOptionInt) || (userSelectedOptionInt < 1 || userSelectedOptionInt > 5)) // Forces user to only put numbers between 1 to 5
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Forces user to only put integers and not letters
        cout << "\nInvalid Input";
        cout << "\nInput Choice here: ";
    }
    return userSelectedOptionInt;
}

void showEquationDouble(const double numFirstDouble, const double numSecondDouble, const double userSelectedOption)
{

    if (userSelectedOption == 1)
    {
        cout << endl;
        cout << numFirstDouble << " * " << numSecondDouble << " = " << multiplicationDouble(numFirstDouble, numSecondDouble) << endl;
    }
    if (userSelectedOption == 2)
    {
        cout << endl;
        cout << numFirstDouble << " / " << numSecondDouble << " = " << divisionDouble(numFirstDouble, numSecondDouble) << endl;
    }
    if (userSelectedOption == 3)
    {
        cout << endl;
        cout << numFirstDouble << " - " << numSecondDouble << " = " << subtractionDouble(numFirstDouble, numSecondDouble) << endl;
    }
    if (userSelectedOption == 4)
    {
        cout << endl;
        cout << numFirstDouble << " + " << numSecondDouble << " = " << additionDouble(numFirstDouble, numSecondDouble) << endl;
    }
}

void showEquationInt(const int numFirstInt, const int numSecondInt, const int userSelectedOption)
{

    if (userSelectedOption == 1)
    {
        cout << endl;
        cout << numFirstInt << " * " << numSecondInt << " = " << multiplicationDouble(numFirstInt, numSecondInt) << endl;
    }
    if (userSelectedOption == 2)
    {
        cout << endl;
        cout << numFirstInt << " / " << numSecondInt << " = " << divisionDouble(numFirstInt, numSecondInt) << endl;
    }
    if (userSelectedOption == 3)
    {
        cout << endl;
        cout << numFirstInt << " - " << numSecondInt << " = " << subtractionDouble(numFirstInt, numSecondInt) << endl;
    }
    if (userSelectedOption == 4)
    {
        cout << endl;
        cout << numFirstInt << " + " << numSecondInt << " = " << additionDouble(numFirstInt, numSecondInt) << endl;
    }
    if (userSelectedOption == 5)
    {
        cout << endl;
        cout << numFirstInt << " % " << numSecondInt << " = " << modulusInt(numFirstInt, numSecondInt) << endl;
    }
}

int main()
{
    cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t            Calculator" << endl;
    cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    double numFirstDouble, numSecondDouble;
    int numFirstInt, numSecondInt;
    double userSelectedOptionInt, userSelectedOptionDouble;
    int calculatorUserOptions;

    calculatorUserOptions = calculatorOption();

    if (calculatorUserOptions == 1) // Doubles
    {
        numFirstDouble = getUserOptionNumFirstDouble();
        numSecondDouble = getUserOptionNumSecondDouble();
        userSelectedOptionDouble = userOptionsListDouble();
        showEquationDouble(numFirstDouble, numSecondDouble, userSelectedOptionDouble);
    }

    if (calculatorUserOptions == 2) // Ints
    {
        numFirstInt = getUserOptionNumFirstInt();
        numSecondInt = getUserOptionNumSecondInt();
        userSelectedOptionInt = userOptionsListInt();
        showEquationInt(numFirstInt, numSecondInt, userSelectedOptionInt);
    }

    int userDecision;
    int loopUserDecision;
    cout << "\nWould you like to use the calculator again? *(1) for yes or enter anything for no: ";
    cin >> userDecision;

    for (loopUserDecision = 0; userDecision != 10000; loopUserDecision++)
    {
        if (userDecision == 1)
        {
            calculatorUserOptions = calculatorOption();
            if (calculatorUserOptions == 1) // Doubles
            {
                numFirstDouble = getUserOptionNumFirstDouble();
                numSecondDouble = getUserOptionNumSecondDouble();
                userSelectedOptionDouble = userOptionsListDouble();
                showEquationDouble(numFirstDouble, numSecondDouble, userSelectedOptionDouble);
            }

            if (calculatorUserOptions == 2) // Ints
            {
                numFirstInt = getUserOptionNumFirstInt();
                numSecondInt = getUserOptionNumSecondInt();
                userSelectedOptionInt = userOptionsListInt();
                showEquationInt(numFirstInt, numSecondInt, userSelectedOptionInt);
            }
            cout << "\nWould you like to use the calculator again? *(1) for yes or enter anything for no: ";
            cin >> userDecision;
        }
        else
        {
            cout << "\nThank you for using the Calculator!";
            cout << "\n         Have A Great Day!";
            cout << "\n            ";

            return 0;
        }
    }
}
