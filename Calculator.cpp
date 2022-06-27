#include <iostream>
#include <limits>

// This function allows the user to choose between two calculators; one being whole numbers and the other being decimals
int calculatorOption()
{
    int calculatorOptions;
    std::cout << "\nWhat would like to use?" << std::endl
              << "(1) for Decimal Places" << std::endl
              << "(2) for Whole Numbers" << std::endl
              << "Input Choice here: ";

    while (!(std::cin >> calculatorOptions) || (calculatorOptions < 1 || calculatorOptions > 2))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nInvalid Option." << std::endl
                  << "Input Choice Here: ";
    }

    return calculatorOptions;
}

// This is a class for the decimal place calculator
class doubleCalculator
{
public:
    // Functions 1 - 4 are all the calculations for each provided operator
    // ! 1 - Multiple
    double multiplicationDouble(const double numFirstDouble, const double numSecondDouble)
    {
        return numFirstDouble * numSecondDouble;
    }
    // ! 2 - Divide
    double divisionDouble(const double numFirstDouble, const double numSecondDouble)
    {
        return numFirstDouble / numSecondDouble;
    }
    // ! 3 - Subtract
    double subtractionDouble(const double numFirstDouble, const double numSecondDouble)
    {
        return numFirstDouble - numSecondDouble;
    }
    // ! 4 - Addition
    double additionDouble(const double numFirstDouble, const double numSecondDouble)
    {
        return numFirstDouble + numSecondDouble;
    }

    // This function presents the user the equation they created with the two numbers they want to calculate with and shows them the answer
    void showEquationDouble(const double numFirstDouble, const double numSecondDouble, const double userSelectedOption)
    {

        if (userSelectedOption == 1)
        {
            std::cout << std::endl;
            std::cout << numFirstDouble << " * " << numSecondDouble << " = " << multiplicationDouble(numFirstDouble, numSecondDouble) << std::endl;
        }
        if (userSelectedOption == 2)
        {
            std::cout << std::endl;
            std::cout << numFirstDouble << " / " << numSecondDouble << " = " << divisionDouble(numFirstDouble, numSecondDouble) << std::endl;
        }
        if (userSelectedOption == 3)
        {
            std::cout << std::endl;
            std::cout << numFirstDouble << " - " << numSecondDouble << " = " << subtractionDouble(numFirstDouble, numSecondDouble) << std::endl;
        }
        if (userSelectedOption == 4)
        {
            std::cout << std::endl;
            std::cout << numFirstDouble << " + " << numSecondDouble << " = " << additionDouble(numFirstDouble, numSecondDouble) << std::endl;
        }
    }
    // This function asks the user for their first number input and it can't be anything but numbers
    double getUserInputFirstDouble()
    {
        double numFirstDouble;

        std::cout << "\nFirst number input: ";
        std::cin >> numFirstDouble;

        while (true)
        {
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid Input";
                std::cout << "\nTry again! (First Number): ";
                std::cin >> numFirstDouble;
            }
            else
                return numFirstDouble;
        }
    }
    // This function asks the user for their second number input and it can't be anything but numbers
    double getUserInputSecondDouble()
    {
        double numSecondDouble;

        std::cout << "\nSecond number input: ";
        std::cin >> numSecondDouble;

        while (true)
        {
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid Input";
                std::cout << "\nTry again! (Second Number): ";
                std::cin >> numSecondDouble;
            }
            else
                return numSecondDouble;
        }
    }
    // This function allows the user to choose between the 4 options of operators
    double userOptionsListDouble()
    {
        double userSelectedOptionDouble;
        std::cout << "\nWhat would you like to do?" << std::endl
                  << "(1) for Multiplication" << std::endl
                  << "(2) for Division" << std::endl
                  << "(3) for Subtraction" << std::endl
                  << "(4) for Addition" << std::endl
                  << "Input Choice here: ";

        while (!(std::cin >> userSelectedOptionDouble) || (userSelectedOptionDouble < 1 || userSelectedOptionDouble > 4)) // Forces user to only put numbers between 1 to 4
        {

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Forces user to only put integers and not letters
            std::cout << "\nInvalid Input";
            std::cout << "\nInput Choice here: ";
        }
        return userSelectedOptionDouble;
    }
};

// This is a class for the whole number calculator
class intCalculator
{
public:
    // Functions 1 - 5 are all the calculations for each provided operator
    // ! 1 - Multiple
    int multiplicationInt(const int numFirst, const int numSecond)
    {
        return numFirst * numSecond;
    }
    // ! 2 - Divide
    int divisionInt(const int numFirst, const int numSecond)
    {
        return numFirst / numSecond;
    }
    // ! 3 - Subtract
    int subtractionInt(const int numFirst, const int numSecond)
    {
        return numFirst - numSecond;
    }
    // ! 4 - Addition
    int additionInt(const int numFirst, const int numSecond)
    {
        return numFirst + numSecond;
    }
    // ! 5 - Modulus
    int modulusInt(const int numFirst, const int numSecond)
    {
        return numFirst % numSecond;
    }
    // This function presents the user the equation they created with the two numbers they want to calculate with and shows them the answer
    void showEquationInt(const int numFirstInt, const int numSecondInt, const int userSelectedOption)
    {

        if (userSelectedOption == 1)
        {
            std::cout << std::endl;
            std::cout << numFirstInt << " * " << numSecondInt << " = " << multiplicationInt(numFirstInt, numSecondInt) << std::endl;
        }
        if (userSelectedOption == 2)
        {
            std::cout << std::endl;
            std::cout << numFirstInt << " / " << numSecondInt << " = " << divisionInt(numFirstInt, numSecondInt) << std::endl;
        }
        if (userSelectedOption == 3)
        {
            std::cout << std::endl;
            std::cout << numFirstInt << " - " << numSecondInt << " = " << subtractionInt(numFirstInt, numSecondInt) << std::endl;
        }
        if (userSelectedOption == 4)
        {
            std::cout << std::endl;
            std::cout << numFirstInt << " + " << numSecondInt << " = " << additionInt(numFirstInt, numSecondInt) << std::endl;
        }
        if (userSelectedOption == 5)
        {
            std::cout << std::endl;
            std::cout << numFirstInt << " % " << numSecondInt << " = " << modulusInt(numFirstInt, numSecondInt) << std::endl;
        }
    }
    // This function asks the user for their first number input and it can't be anything but numbers
    int getUserInputFirstInt()
    {
        int numFirstInt;

        std::cout << "\nFirst number input: ";
        std::cin >> numFirstInt;

        while (true)
        {
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid Input";
                std::cout << "\nTry again! (First Number): ";
                std::cin >> numFirstInt;
            }
            else
                return numFirstInt;
        }
    }
    // This function asks the user for their second number input and it can't be anything but numbers
    int getUserInputSecondInt()
    {
        double numSecondInt;

        std::cout << "\nSecond number input: ";
        std::cin >> numSecondInt;

        while (true)
        {
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nInvalid Input";
                std::cout << "\nTry again! (Second Number): ";
                std::cin >> numSecondInt;
            }
            else
                return numSecondInt;
        }
    }
    // This function allows the user to choose between the 5 options of operators
    int userOptionsListInt()
    {
        int userSelectedOptionInt;
        std::cout << "\nWhat would you like to do?" << std::endl
                  << "(1) for Multiplication" << std::endl
                  << "(2) for Division" << std::endl
                  << "(3) for Subtraction" << std::endl
                  << "(4) for Addition" << std::endl
                  << "(5) for Modulus" << std::endl
                  << "Input Choice here: ";

        while (!(std::cin >> userSelectedOptionInt) || (userSelectedOptionInt < 1 || userSelectedOptionInt > 5)) // Forces user to only put numbers between 1 to 5
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Forces user to only put integers and not letters
            std::cout << "\nInvalid Input";
            std::cout << "\nInput Choice here: ";
        }
        return userSelectedOptionInt;
    }
};

int main()
{
    std::cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "\t\t            Calculator" << std::endl;
    std::cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    double numFirstDouble, numSecondDouble, userSelectedListDouble;
    int numFirstInt, numSecondInt, userSelectedListInt;
    int calculatorUserOptions;

    class doubleCalculator doubleCal;
    class intCalculator intCal;

    calculatorUserOptions = calculatorOption();

    if (calculatorUserOptions == 1) // double
    {
        numFirstDouble = doubleCal.getUserInputFirstDouble();                                  // This is using variable numFirstDouble and storing the first input of user in there with the selected function
        numSecondDouble = doubleCal.getUserInputSecondDouble();                                // This is using variable numSecondDouble and storing the first input of user in there with the selected function
        userSelectedListDouble = doubleCal.userOptionsListDouble();                            // This is getting the user's input for what operator they want to use and storing it in userSelectedListDouble
        doubleCal.showEquationDouble(numFirstDouble, numSecondDouble, userSelectedListDouble); // This function will use all stored variables to present the equation and answer
    }

    if (calculatorUserOptions == 2) // int
    {                               // This follows the same progress of the previous if statement
        numFirstInt = intCal.getUserInputFirstInt();
        numSecondInt = intCal.getUserInputSecondInt();
        userSelectedListInt = intCal.userOptionsListInt();
        intCal.showEquationInt(numFirstInt, numSecondInt, userSelectedListInt);
    }

    int userDecision;

    std::cout << "\nWould you like to use the calculator again? *(1) for yes or *(0) no: ";
    std::cin >> userDecision;

    // This will loop between the number 1 and 0 until the user chooses 0 to stop using the calculator
    while (!(std::cin >> userDecision) || (userDecision < 0) || (userDecision > 1))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nInvalid Option." << std::endl
                  << "Input Choice Here: ";

        if (userDecision == 1)
        {
            calculatorUserOptions = calculatorOption();
            if (calculatorUserOptions == 1) // Doubles
            {                               // Same progress as the first if statements
                numFirstDouble = doubleCal.getUserInputFirstDouble();
                numSecondDouble = doubleCal.getUserInputSecondDouble();
                userSelectedListDouble = doubleCal.userOptionsListDouble();
                doubleCal.showEquationDouble(numFirstDouble, numSecondDouble, userSelectedListDouble);
            }

            if (calculatorUserOptions == 2) // Ints
            {                               // Same progress as the first if statements
                numFirstInt = intCal.getUserInputFirstInt();
                numSecondInt = intCal.getUserInputSecondInt();
                userSelectedListInt = intCal.userOptionsListInt();
                intCal.showEquationInt(numFirstInt, numSecondInt, userSelectedListInt);

                std::cout << "\nWould you like to use the calculator again? *(1) for yes or *(0) no: ";
                std::cin >> userDecision;
            } // This will end program and while loop
            else
            {
                std::cout << "\nThank you for using the Calculator!";
                std::cout << "\n         Have A Great Day!";
                std::cout << "\n            ";

                return 0;
            }
        }
    }
}