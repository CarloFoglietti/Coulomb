#include <cmath>
#include <iostream>

using namespace std;

struct position {
  int x{};
  int y{};
};

class particle {
 private:
  double charge{};
  position pos{};
  int num{};

 public:
  void setCharge(double a) { charge = a; }
  double getCharge() { return charge; }
  void setPosition(int x, int y) {
    pos.x = x;
    pos.y = y;
  }
  position getPosition() {
    position q;
    q.x = pos.x;
    q.y = pos.y;
    return q;
  };
};

double dist(position p, particle q) {
  double dist{};
  dist =
      sqrt(pow(p.x - q.getPosition().x, 2) + pow(p.y - q.getPosition().y, 2));
  return dist;
}

double field(position p, particle q) {
  const int k = 9;
  double force = (k * q.getCharge()) / dist(p, q);
  return force;
}

particle userCharge() {
  particle q;
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
  return q;
}

int main() {
  position p;
  p.x = 1;
  p.y = 0;
  particle q;
  q = userCharge();
  cout << "Palle: la forza è " << field(p, q) << '\n';
  return 1;
}