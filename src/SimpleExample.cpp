#include <iostream>

using namespace std;

int main() {
  try {
    // Block of code which needs to be tested for errors
    throw 404; // int type exception thrown
  } catch (int &exception) {
    cout << "Error: " << exception << endl;
  }
  return 0;
}
