#include <iostream>
//
int main()
{
  std::cout << "Welcome to the calculator v1.0" << std::endl;
  std::cout << "This is a simple calculator that performs basic operations." << std::endl;
  while (true)
  {
    int num1, num2;
    double result = 0;

    std::cout << "What operation would you like to perform?" << std::endl;
    std::cout
        << "1. Add" << std::endl
        << "2. Subtract" << std::endl
        << "3. Multiply" << std::endl
        << "4. Divide" << std::endl
        << "5. Power" << std::endl
        << "6. Modulo" << std::endl;

    int option;
    std::cout << "- ";
    std::cin >> option;

    std::cout << "Enter value for 'num1': ";
    std::cin >> num1;
    std::cout << "Enter value for 'num2': ";
    std::cin >> num2;

    switch (option)
    {
    case 1:
      result = num1 + num2;
      std::cout << "The sum of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;

    case 2:
      result = num1 - num2;
      std::cout << "The subtraction of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;

    case 3:
      result = num1 * num2;
      std::cout << "The multiplication of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;

    case 4:
      if (num2 == 0)
      {
        std::cout << "Cannot divide by zero" << std::endl;
        break;
      }
      result = num1 / num2;
      std::cout << "The division of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;

    case 5:
      result = 1;
      for (int i = 1; i <= num2; ++i)
      {
        result *= num1;
      }
      std::cout << "The power of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;

    case 6:
      result = num1 % num2;
      std::cout << "The modulo of the values " << num1 << " and " << num2 << " is: " << result << std::endl;
      break;
    }

    std::cout << "Do you want to perform another operation? (y/n)" << std::endl;
    std::string response;
    std::cin >> response;
    bool decision = (response == "y" || response == "Y") ? true : false;

    if (decision == false)
    {
      std::cout << "Closing program: calculator" << std::endl;
      break;
    }
  }
  return 0;
}