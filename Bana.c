#include <iostream>

using namespace std;

void fasele(int n) {
  for (int i = 1; i <= n; i++)
    cout << " ";
  return;
}

int main() {
  int n;
  cout << "Enter number : ";
  cin >> n;
  int a = n, b = n - 1, c = n - 1;
  for (int i = 1; i <= 2 * n - 1; i += 2) {
    fasele(a);
    for (int j = 1; j <= i; j++)
      cout << "*";
    fasele(b);
    fasele(c);
    for (int k = 1; k <= i; k++) {

      cout << "*";
    }
    cout << endl;
    a--;
    b--;
    c--;
  }
  int d = 2, e = 1, f = 1;
  for (int i = 2 * n - 3; i >= 1; i -= 2) {
    fasele(d);
    for (int j = 1; j <= i; j++)
      cout << "*";
    fasele(e);
    fasele(f);
    for (int k = 1; k <= i; k++)
      cout << "*";
    cout << "\n";
    e++;
    f++;
    d++;
  }
}
