#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

int main() {

  double x1, x2;
  double y1, y2, d;

  cin >> x1 >> x2;
  cin >> y1 >> y2;

  d = sqrt((x2 - x1)*2 + (y2 - y1)*2);

  cout << fixed << setprecision(4) << d << endl;
  return 0;
}
