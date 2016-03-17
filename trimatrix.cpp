#include <iostream>
#include "trimatrix.h"

void TriMatrix::print() {
  std::cout << "TriMatrix!" << count << "\n";
}

void TriMatrix::setCount(int c) {
  count = c;
}
