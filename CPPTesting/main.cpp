using namespace std;
#include <iostream>
#include <cmath>

int main1() {
  double a = sin(1.2);
  cout << a << endl;
  exit(EXIT_SUCCESS);
}

double a = 128;

int main2()
{
  double a = 256;

  cout << "Local a:  " << a << endl;
  cout << "Global a: " << ::a << endl;

  return 0;
}

int main3()
{
  double a = 3.1415927;

  double &b = a;
  double *c = &a;

  b = 89;
  *c = 1337;

  cout << "a contains: " << a << endl;

  return 0;
}

void change_by_ref(double &ref, double val) {
  ref = val;
}

int main4() {
  double a = 1.337;
  change_by_ref(a, 13.37);
  cout << "The value of a is " << a << endl;
  exit(EXIT_SUCCESS);
}

double &max_var(double &a, double &b) {
  return a > b ? a : b;
}

#define print_val(x) (cout << #x" = " << (x) << endl)

int main() {
  double a = 1.5;
  double b = 2.0;
  double &c = max_var(a, b);

  print_val(a);
  print_val(b);
  print_val(c);

  cout << endl;

  print_val(&a);
  print_val(&b);
  print_val(&c);

  return 0;
}
