#include <iostream>
#include "trimatrix.h"

int main()
{
  int L, N_x, T, N_t, alpha;
  std::cout << "Please provide L: ";
  std::cin >> L;

  std::cout << "Please provide Nx: ";
  std::cin >> N_x;

  std::cout << "Please provide T: ";
  std::cin >> T;

  std::cout << "Please provide Nt: ";
  std::cin >> N_t;

  std::cout << "Please provide alpha: ";
  std::cin >> alpha;
  
  TriMatrix triMatrix;
  triMatrix.setCount(L);
  triMatrix.print();
}
