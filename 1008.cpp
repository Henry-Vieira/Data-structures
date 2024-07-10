#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int number;
  int hours;
  double pay;
  cin >> number >> hours >> pay;

  double salary = hours * pay;

  cout << "NUMBER = " << number << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

  return 0;
}