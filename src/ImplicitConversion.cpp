#include <iostream>

using namespace std;

int main() {
  try {
    // Block of code which needs to be tested for errors
    throw 'a';               // Exception thrown
  } catch (int &exception) { // Not caught as implicit conversion doesn’t happen
    cout << "Int Exception: " << exception << endl;
  } catch (char &exception) {
    cout << "Char Exception: " << exception << endl;
  }
}
