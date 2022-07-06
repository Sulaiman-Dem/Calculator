# Calculator

## Pseudocode

### User Interface =

0. The user must choose between whole numbers and decimal numbers
1. The user must input their first number and second number into the program
2. Then the user must select what operator they want to use from the list
3. The user will choose to use the program again or end it

### Code Interface =

##### Functions :

0. This function that allows the user to choose between decimal number or whole numbers
1. A class (doubleCalculator) that contains the 4 similar member functions that multiple, divide, subtract and addition
2. In class (doubleCalculator) the function that presents the equation setup for each operator and shows the answer for the user's input
3. In class (doubleCalculator) this function asks the user for their first number input and it can't be anything but numbers
4. In class (doubleCalculator) this function asks the user for their second number input and it can't be anything but numbers
5. In class (doubleCalculator) this function allows the user to choose between the 4 options of operators
6. A class (intCalculator) that contains the 5 similar member functions that multiple, divide, subtract, addition and modulus
7. A class (intCalculator) the function that presents the equation setup for each operator and shows the answer for the user's input
8. A class (intCalculator) this function asks the user for their first number input and it can't be anything but numbers
9. A class (intCalculator) this function asks the user for their second number input and it can't be anything but numbers
10. A class (intCalculator) this function allows the user to choose between the 5 options of operators
11. This function is a while loop that allows infinite usages of the program until the user is finished

##### Int main () :

0. Description of the program
1. Declared variables needed for the program to run properly
2. The function that allows the user to choose between decimal number or whole numbers
3. Then depending on what they choose the Int(whole) or Double(decimal) will progress toward asking the user for 2 separate numbers
4. Afterward the user is presented the list of operators and finally depending their choice the equation will be visual presented with the answer
5. The loop function will trigger and ask the user if they want to use the calculator again if not the program will end

### Issue :

1. Figuring out how to implement modulus into this program.
   Solution = So I came up with the idea of have two separate calculators for whole numbers and decimal numbers
2. Had an issue with the "while" loop of whether the user wants to continue using the calculator since it was in the int main()
   Solution = I created a separate function for the while loop and made it so that the function would equal the userDecision and now it works perfectly
3. I had an issue where my while loop would only loop twice and it would automatically end after the second usage of the program if the user wanted to use the program again
   Solution = I created the if statements within the while loop and now it loops continuously until the user is finished with program
