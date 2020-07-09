#include <iostream>

using namespace std;

void only_throw() noexcept { // noexcept(false): exception can be thrown
  throw 404;                 // Exception thrown
}

int main() {
  try {
    // Block of code which needs to be tested for errors
    only_throw();
  } catch (int &exception) {
    cout << "Int Exception: " << exception << endl;
  }
}
