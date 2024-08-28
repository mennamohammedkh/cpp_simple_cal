#include <iostream>
using  std::cout;
using  std::cin;
using  std::endl;

int main()
{
  double num1, num2;
  char operation;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  cout << "Enter an operation (+, -, *, /): ";
  cin >> operation;
  switch (operation)
  {
  case '+':
      cout << "Result: " << num1 + num2 << endl;
      break;
  case '-':
      cout << "Result: " << num1 - num2 << endl;
      break;
  case '*':
      cout << "Result: " << num1 * num2 << endl;
      break;
  case '/':
      if (num2 != 0)
      {
          cout << "Result: " << num1 / num2 << endl;
      }
      else
      {
          cout << "Error: Division by zero" << endl;
      }
      break;
  default:
      cout << "Invalid operation" << endl;
        }

  return 0;
}
