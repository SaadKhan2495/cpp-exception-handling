#include <iostream>

using namespace std;

int main() {
  try {
    // Block of code which needs to be tested for errors
    try {
      throw 404; // Exception thrown
    } catch (int &exception) {
      cout << "Int Exception: " << exception << " Handle partially" << endl;
      throw; // Exception re-thrown
    }
  } catch (int &exception) {
    cout << "Int Exception: " << exception << " Handle Remaining" << endl;
  }
}
