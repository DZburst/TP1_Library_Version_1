#ifndef DEF_Date
#define DEF_Date
#include <string>
#include <vector>
using namespace std;

class Date {
public:
 Date(int year=1, int month=1, int day=1);
 int year() const;
 int month() const;
 int day() const;
 void updateyear(int year);
 void updateMonth(int month);
 void updateDay(int day);
 void next();
private:
 int _year;
 int _month;
 int _day;
 bool isDate(int year, int month, int day);
 int getDaysInMonth(int month) const;
};
#endif