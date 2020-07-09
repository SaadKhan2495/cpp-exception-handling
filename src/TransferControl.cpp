#include <iostream>

using namespace std;

class TestObject {
public:
  TestObject() { cout << "Constructor of TestObject called" << endl; }
  ~TestObject() { cout << "Destructor of TestObject called" << endl; }
};

int main() {
  try {
    // Block of code which needs to be tested for errors
    TestObject test_object;
    throw 404; // TestObject destroyed before control is transferred by throw
  } catch (int &exception) {
    cout << "Int Exception: " << exception << endl;
  }
}
