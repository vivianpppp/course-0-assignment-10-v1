#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  unsigned int age;
  unsigned int gpa;
}

int main() {
  Student my_student;
  cout << "What is your students name: ";
  cin >> my_student.name;
  cout << "What is your students age: ";
  cin >> my_student.age;
  cout << "What is your heros gpa: ";
  cin >> my_student.gpa;

  cout << "You have enrolled student: " << my_student << endl;
  cout << "The students is " << age << "years old." << endl;
  cout << "The student has a gpa of: " << gpa << endl;
  return 0;
}
