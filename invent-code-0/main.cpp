#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;
};

struct Rectangle {
  int x;
  int y;
};

struct DriverLicense {
  string name;
  string dob;
  string state;
  string license_number;
};

struct CalendarAppt{
  string name;
  string date;
  string time;
};

Point GetPoint() {
   Point val;
   cout << "Enter x on XY plane: ";
   cin >> val.x;
   cout << "Enter y on XY plane: ";
   cin >> val.y;
   return val;
}

Rectangle GetRectangle() {
    Point val;
   cout << "Enter x on XY plane: ";
   cin >> val.x;
   cout << "Enter y on XY plane: ";
   cin >> val.y;
   return val;
}



int main() {
  return 0;
}
