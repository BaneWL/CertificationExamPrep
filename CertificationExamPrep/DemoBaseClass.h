#ifndef DEMOBASECLASS_H
#define DEMOBASECLASS_H
#include <iostream>
#include <string>
class DemoBaseClass {
 private:
  std::string description;
  int exampleNum;

 public:
  DemoBaseClass(){};
  DemoBaseClass(std::string inputDescription,
                int inputExampleNum);  // Prototype constructor
  void demonstratePolymorphism();
  std::string getDescription() { return description; }
  int getExampleNum() { return exampleNum; }
};
#endif

/*
Procedural VS Object Oriented
The Procedural approach requires less preparation to set up and can work for
smaller projects, but begins to quickly fall apart once the scale of the project
increases. While Object Oriented allows you to reuse large amounts of code,
Procedural requires you to manually create the same segments of code repeatedly
if you want to achieve anything along the lines of objects in Object Oriented.
Object Oriented also allows you to keep certain parts of code hidden from the
rest of the project so it isn't accidentally modified, which can be useful when
working with groups of other developers rather than creating a solo project. It
also allows for much more convenient modification compared to Procedural, which
may require you to manually go through and change several different lines of
code whenever you want to make a certain modification to the program.
*/