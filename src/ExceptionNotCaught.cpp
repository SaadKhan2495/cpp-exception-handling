#include <iostream>

using namespace std;

int main() {
  try {
    // Block of code which needs to be tested for errors
    throw 'a';               // Exception thrown
  } catch (int &exception) { // Not caught because exception thrown type is char
    cout << "Int Exception: " << exception << endl;
  }
}
