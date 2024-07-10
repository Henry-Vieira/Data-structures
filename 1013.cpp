#include <iomanip>
#include <iostream>

using namespace std;

int MaiorAB(int A, int B) { return (A + B + abs(A - B)) / 2; }

int main() {

  int A, B, C;

  cin >> A >> B >> C;

  int maior_ab = MaiorAB(A, B);
  int maior = MaiorAB(maior_ab, C);

  cout << maior << " eh o maior" << endl;

  return 0;
}
