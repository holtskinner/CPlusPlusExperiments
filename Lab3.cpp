#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a = 0, b = 0, c = 0, s = 0, quit = 0;

  while (quit != -1) {
    cout << "Enter 3 sides of a triangle\n";
    cin >> a >> b >> c;

    while (a <= 0) {
      cout << "Side 1 is invalid, Try again.\n";
      cin >> a;
    }

    while (b <= 0) {
      cout << "Side 2 is invalid, Try again.\n";
      cin >> b;
    }

    while (c <= 0) {
      cout << "Side 3 is invalid, Try again.\n";
      cin >> c;
    }

    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
      cout << "Sides do not form a triangle.\n";

    } else {
      s = (a + b + c) / 2;

      cout << "Area of triangle is " << sqrt(s * (s - a) * (s - b) * (s - c))
           << "\n";

      if (a == b && b == c) {
        cout << "Triangle is equilateral.\n";
      }
      if (a == b || b == c || a == c) {
        cout << "Triangle is isoseles.\n";
      } else if (a != b != c) {
        cout << "Triangle is scalene.\n";
      }
    }
    cout << "Continue? (Enter -1 to quit)\n";
    cin >> quit;
  }
  return 0;
}
