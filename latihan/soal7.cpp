#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    if ((i % 2 == 0) && (i % 4 != 0))
      cout << i;
  }
  cout << endl;
}