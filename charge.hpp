#include <vector>

#include "vector.hpp"

using namespace std;

class charge {
 private:
  double fcharge{};
  vect fpos{};
  int num{};

 public:
  void setCharge(double a) { fcharge = a; }
  double getCharge() { return fcharge; }
  void setPosition(int x, int y) {
    fpos.x = x;
    fpos.y = y;
  }
  void setPosition(vect p) { fpos = p; }
  vect getPosition() {
    vect q;
    q.x = fpos.x;
    q.y = fpos.y;
    return q;
  }
};

vector<charge> contatore{};

charge userCharge() {
  charge q;
  double input;
  cout << "Charge: \n";
  cin >> input;
  q.setCharge(input);
  int x;
  int y;
  cout << " x position: \n";
  cin >> x;
  cout << " y position: \n";
  cin >> y;
  q.setPosition(x, y);
  contatore.push_back(q);
  return q;
}
