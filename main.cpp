#include <iostream>
#include <string>

using namespace std;

int main() {
  auto print = [](const char *message) { cout << message << endl; };
  print("hello, world");

  return 0;
}
