#include "field.hpp"

using namespace std;

int main() {
  userCharge();
  userCharge();
  vect userPos{0,0};
  totField(userPos).print(); 
  return 0;
}