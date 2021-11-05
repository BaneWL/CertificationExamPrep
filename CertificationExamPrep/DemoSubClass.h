#ifndef DEMOSUBCLASS_H
#define DEMOSUBCLASS_H
#include <iostream>
#include <string>

#include "DemoBaseClass.h"
class DemoSubClass : public DemoBaseClass {
 private:
  std::string description;
  int exampleNum;

 public:
  DemoSubClass(std::string inputDescription,
               int inputExampleNum);  // Prototype constructor
  DemoSubClass(
      std::string overloadText);  // Prototype overload example constructor
  void demonstratePolymorphism();
};
#endif

/*When inheriting from a super class, as seen above with "class DemoSubClass :
public DemoBaseClass" you have three options for accessibility. Public,
Protected, and Private.

Public results in all public members remaining public, all protected members
remaining protected, and all private members remaining private.

Protected results in all public members being upgraded to protected, all
protected members remaining protected, and all private members remaining
private.

Private results in all public and protected members being upgraded to private,
and all private members remaining private.*/