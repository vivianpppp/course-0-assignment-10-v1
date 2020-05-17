#include <iostream>
#include <string>
using namespace std;

struct Point {
  int x;
  int y;
};

struct Rectangle {
  int width;
  int length;
};

struct DriverLicense {
  string name_first;
  string name_last;
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
  cout << "What is the width of the rectangle?";
  cin >> val.width;
  cout << "What is the length of the rectangle?";
  cin >> val.length;
  return val;
}

DriverLicense GetLicense() {
  DriverLicense info;
  cout << "What is your first name?";
  cin >> info.name_first;
  cout << "What is your last name?";
  cin >> info.name_last;
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
  cout << "When is the date of the event?";
  cin >> info.date;
  cout << "Where is the location of the event?";
  cin >> info.location;
  return info;
}

void PrintAll(Point a, Rectangle b, DriverLicense c, CalendarAppt d) {
  cout << "The coordinate of the point is: (" << a.x << ", " << a.y << ")" << endl;

  cout << "The coordinates of the rectangle are: (0,0), (0," << b.length << "), (" << b.width << ",0), (" << b.width << "," << b.length << ")" << endl;
  
  cout << "The driver license number for " << c.name_first << " " << c.name_last << " from " << c.state << " is " << c.license_number << endl;
//  cout << "Name: " << c.name << endl;
//  cout << "State: " << c.state << endl;
//  cout << "Driver License Number: " << c.license_number << endl;

  cout << "The appointment for " << d.name << " on " << d.date << " is at " << d.location << endl; 
//  cout << "Event Name: " << d.name << endl;
//  cout << "Event Time: " << d.date << endl;
//  cout << "Event Location: " << d.location << endl;

}

int main() {
  cout << "Point" << endl;
  Point a = GetPoint();
  cout << "Rectangle" << endl;
  Rectangle b = GetRectangle();
  cout << "Driver License" << endl;
  DriverLicense c = GetLicense();
  cout << "Calendar Appointment" << endl;
  CalendarAppt d = GetAppt();

  cout << endl;
  cout << "Summary Information" << endl;
  PrintAll(a, b, c, d);

  return 0;
}
