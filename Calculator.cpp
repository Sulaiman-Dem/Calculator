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

// 1 int
int multiplicationInt(const int numFirst, const int numSecond)
{
    return numFirst * numSecond;
}
// 2 int
int divisionInt(const int numFirst, const int numSecond)
{
    return numFirst / numSecond;
}
// 3 int
int subtractionInt(const int numFirst, const int numSecond)
{
    return numFirst - numSecond;
}
// 4 int
int additionInt(const int numFirst, const int numSecond)
{
    return numFirst + numSecond;
}
// 5 int
int modulusInt(const int numFirst, const int numSecond)
{
    return numFirst % numSecond;
}

int calculatorOption()
{
    int calculatorOptions;

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
            cout << "\nTry again! (First Number): ";
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
            cout << "\nTry again! (First Number): ";
            cin >> numSecondInt;
        }
        else
            return numSecondInt;
    }
}

double userOptionsListDouble()
{
    double userSelectedOption;
    cout << "\nWhat would you like to do?" << endl
         << "(1) for Multiplication" << endl
         << "(2) for Division" << endl
         << "(3) for Subtraction" << endl
         << "(4) for Addition" << endl
         << "Input Choice here: ";

    while (!(cin >> userSelectedOption) || (userSelectedOption < 1 || userSelectedOption > 4)) // Forces user to only put numbers between 1 to 4
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Forces user to only put integers and not letters
        cout << "\nInvalid Input";
        cout << "\nInput Choice here: ";
    }
    return userSelectedOption;
}

int userOptionsListInt()
{
    int userSelectedOption;
    cout << "\nWhat would you like to do?" << endl
         << "(1) for Multiplication" << endl
         << "(2) for Division" << endl
         << "(3) for Subtraction" << endl
         << "(4) for Addition" << endl
         << "(5) for Modulus" << endl
         << "Input Choice here: ";

    while (!(cin >> userSelectedOption) || (userSelectedOption < 1 || userSelectedOption > 5)) // Forces user to only put numbers between 1 to 5
    {

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Forces user to only put integers and not letters
        cout << "\nInvalid Input";
        cout << "\nInput Choice here: ";
    }
    return userSelectedOption;
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
    double userSelectedOption;

    numFirstDouble = getUserOptionNumFirstDouble();
    numSecondDouble = getUserOptionNumSecondDouble();
    userSelectedOption = userOptionsListDouble();

    showEquationDouble(numFirstDouble, numSecondDouble, userSelectedOption);

    int userDecision;
    int loopUserDecision;
    cout << "\nWould you like to use the caluclator again? *(1) for yes or enter anything for no: ";
    cin >> userDecision;

    for (loopUserDecision = 0; userDecision != 10000; loopUserDecision++)
    {
        if (userDecision == 1)
        {
            numFirstDouble = getUserOptionNumFirstDouble();
            numSecondDouble = getUserOptionNumSecondDouble();
            userSelectedOption = userOptionsListDouble();

            showEquationDouble(numFirstDouble, numSecondDouble, userSelectedOption);
            cout << "\nWould you like to use the caluclator again? *(1) for yes or enter anything for no: ";
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