#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  string NAME;
  double TOTAL, fix, Ts;

  cin >> NAME >> fix >> Ts;

  TOTAL = fix + (Ts * 0.15);

  cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL << endl;

  return 0;
}