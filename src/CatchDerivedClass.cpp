#include <iostream>

using namespace std;

class Base {};
class Derived : public Base {};

int main() {
  Derived derived;
  try {
    throw derived; // Derived class object thrown
  } catch (Base &exception) {
    cout << "Base Exception Caught" << endl;
  } catch (Derived &exception) {
    cout << "Derived Exception Caught" << endl;
  }
}
