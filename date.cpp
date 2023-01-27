#include "date.hpp"
#include <cassert>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

Date::Date(int year, int month, int day){
  _year = year;
  _month = month; 
  _day = day;
} 
void Date::updateMonth(int month) {
  bool status1 = isDate(_year, month, _day);
  assert(status1 && "Month is not valid");
  _month = month;
}
void Date::updateDay(int day) {
  bool status2 = isDate(_year, _month, day);
  assert(status2 && "Day is not valid");
  _day = day;
}
void Date::updateyear(int year) {
  bool status3 = isDate(year, _month, _day);
  assert(status3 && "year is not valid");
  _year = year;
}
int Date::month() const { return _month; }
int Date::day() const { return _day; }
int Date::year() const { return _year; }
bool Date::isDate(int year, int month, int day) {
  if ((day < 1) || (day > 31))
    return false;
  if ((month < 1) || (month > 12))
    return false;
  if ((year < 1) || (year > 2022))
    return false;
  if ((month == 2) && (day > 28))
    return false;
  if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30))
    return false;
  return true;
}
void Date::next() {
 if ((_month==12) && (_day==31)) {
 _day=1;
 _month=1;
 }
 else if (_day == getDaysInMonth(_month)) {
 _day=1;
 _month++;
 }
 else {
 _day++;
 }
}