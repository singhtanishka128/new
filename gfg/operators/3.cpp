#include <iostream>
using namespace std;

int main() {

  // evaluates 17 * 6 first
  int num1 = 5 - 17 * 6;

  // equivalent expression to num1
  int num2 = 5 - (17 * 6);

  // forcing compiler to evaluate 5 - 17 first
  int num3 = (5 - 17) * 6;

  cout << "num1 = " << num1 << endl;
  cout << "num2 = " << num2 << endl;
  cout << "num3 = " << num3 << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 4;

// a -= 6 is evaluated first
  b += a -= 6;

  cout << "a = " << a << endl; ;
  cout << "b = " << b;
}

