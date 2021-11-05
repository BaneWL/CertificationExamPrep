#include "DemoSubClass.h"
DemoSubClass::DemoSubClass(std::string inputDescription, int inputExampleNum)
    : description(inputDescription), exampleNum(inputExampleNum) {}
DemoSubClass::DemoSubClass(std::string overloadText) {
  std::cout << overloadText;
}
void DemoSubClass::demonstratePolymorphism() {
  std::cout << "This function was called using the Sub Class. This allows the "
               "same function to have different behavior depending on what it "
               "is used for. For example, this one will display the result of "
               "squaring the example number ("
            << exampleNum << ") this object was given.\n";
  std::cout << (exampleNum * exampleNum) << std::endl;
};