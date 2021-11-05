// CertificationExamPrep.cpp : This file contains the 'main' function. Program
// execution begins and ends there.
// https://cppinstitute.org/wp-content/uploads/2015/11/cpa_exam_syllabus.pdf
// Bane Lausterer
#include <iostream>

#include "DemoBaseClass.h"
#include "DemoSubClass.h"
// Prototype classes
void demonstrateClasses();

int main() {
  int input;
  std::cout << "Choose a CPA topic to demonstrate\n";
  std::cout << "1. Classes\n";  // demonstrateClasses
  std::cin >> input;
  switch (input) {
    case 1:
      demonstrateClasses();
      break;
    default:
      std::cout << "Invalid input";
  }
}

void demonstrateClasses() {
  DemoBaseClass BaseExample("This is an object created by the Base Class.", 4);
  BaseExample.demonstratePolymorphism();
  DemoSubClass SubExample("This is an object created by the Sub Class.", 4);
  SubExample.demonstratePolymorphism();
  DemoSubClass OverloadExample(
      "This object was creating used overloading. Despite being the same class "
      "as seen above, it functions differently due to the parameters.");
};