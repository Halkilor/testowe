#include <iostream>
#include <limits>

class Parent
{
public:
  double age;
};

class Child : public Parent
{
public:
  int age;
};

int main(int argc, char *argv[])
{
  Parent parent;
  parent.age = 20.4;
  
  std::cout << "Parent age: " << parent.age << std::endl; // Outputs 20.4
  
  Child child;
  child.age = 11;
  
  std::cout << "Child age: " << child.age << std::endl; // Outputs 10 
  
  (child.age > 18)
	? std:cout << "Go to work!"<< std::endl
	: std:cout << "Have fun!"<< std::endl;
 
  
  return 0;
}