#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;
};

struct Rectangle {
  int x1;
  int x2;
  int x3;
  int x4;
  int y1;
  int y2;
  int y3;
  int y4;
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
  string location;
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
  Rectangle val;
  cout << "Enter x on XY plane for first point: ";
  cin >> val.x1;
  cout << "Enter y on XY plane for first point: ";
  cin >> val.y1;
  cout << "Enter x on XY plane for second point: ";
  cin >> val.x2;
  cout << "Enter y on XY plane for second point: ";
  cin >> val.y2;
  cout << "Enter x on XY plane for third point: ";
  cin >> val.x3;
  cout << "Enter y on XY plane for third point: ";
  cin >> val.y3;
  cout << "Enter x on XY plane for fourth point: ";
  cin >> val.x4;
  cout << "Enter y on XY plane for fourth point: ";
  cin >> val.y4;
  return val;
}

DriverLicense GetLicense() {
  DriverLicense info;
  cout << "What is your name?";
  cin >> info.name;
  cout << "What is your date of birth?";
  cin >> info.dob;
  cout << "What state is your DL in?";
  cin >> info.state;
  cout << "What is your Driver License Number?";
  cin >> info.license_number;
  return info;
}

CalendarAppt GetAppt() {
  CalendarAppt info;
  cout << "What is the event title?";
  cin >> info.name;
  cout << "When is the event happening?";
  cin >> info.date;
  cout << "Where is the location of the event?";
  cin >> info.location;
  return info;
}

int main() {
  Point a = GetPoint();
  Rectangle b = GetRectangle();
  DriverLicense c = GetLicense();
  CalendarAppt d = GetAppt();
  return 0;
}
