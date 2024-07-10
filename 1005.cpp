#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double A, B;

  cin >> A >> B;

  double Media = (A * 3.5 + B * 7.5) / (3.5 + 7.5);

  cout << "MEDIA = " << fixed << setprecision(1) << Media << endl;
}