#include "DemoBaseClass.h"
DemoBaseClass::DemoBaseClass(std::string inputDescription, int inputExampleNum)
    : description(inputDescription), exampleNum(inputExampleNum) {}
void DemoBaseClass::demonstratePolymorphism() {
  std::cout << "This function was called using the Base Class. This allows the "
               "same function to have different behavior depending on what it "
               "is used for. For example, this one will display the square "
               "root of the example number ("
            << exampleNum << ") this object was given.\n";
  std::cout << sqrt(exampleNum) << std::endl;
};