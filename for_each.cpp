#include <iostream>
#include <algorithm>
#include <vector>

template <typename Collection, typename unop>
void my_for_each(Collection col, unop op) {
  std::for_each(col.begin(), col.end(), op);
}

int main() {
  auto echo = [](int i) { std::cout << i << std::endl; };
  std::vector<int> col{20, 30, 50, 10, 22, 44, 89, 19};

  my_for_each(col, echo);
  return 0;
}
