#include <cmath>
#include <iostream>

using namespace std;

struct vect{
  double x{0};
  double y{0};

  vect operator+(vect const& v2) {
    vect res;
    res.x = x + v2.x;
    res.y = y + v2.y;
    return res;
  }
  vect operator-(vect const& v2) {
    vect res;
    res.x = x - v2.x;
    res.y = y - v2.y;
    return res;
  }
  vect scal(double a) {
    vect v;
    v.x = a * x;
    v.y = a * y;
    return v;
  }
  double mod() {
    double mod{sqrt(pow(x, 2) + pow(y, 2))};
    return mod;
  }
  double mod2() {
    double mod{pow(x, 2) + pow(y, 2)};
    return mod;
  }
  vect vers() {
    vect v{x, y};
    vect vers = v.scal(1 / (v.mod()));
    return vers;
  }
  void print() {
    cout << "x:" << x << '\n';
    cout << "y:" << y << '\n';
  }
};