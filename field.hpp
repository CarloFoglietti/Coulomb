#include "charge.hpp"

using namespace std;

vect field(charge q, vect p) {
  vect r = p - q.getPosition();
  const double k = 9 * q.getCharge() / r.mod2();
  vect field = (r.vers()).scal(k);
  return field;
}

vect totField(vect p) {
  vect tot{};
  for (int i{0}; i != contatore.size(); i++) {
    tot = tot + field(contatore[i], p);
  }
  return tot;
}
