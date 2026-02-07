// Midterm Activity 1/2
// Create a scheduling program that asks what day of the week you would like to see and point what the schedule for that particular day is

#include <iostream>
using namespace std;
int main() {

  int day;
  char back;

  cout << "There are 7 days in a week" << endl;
  cout << "[1] Sunday\n[2] Monday\n[3] Tuesday\n[4] Wednesday\n[5] Thursday\n[6] Friday\n[7] Saturday" << endl;
  cout << "What day would you like to check your schedule? ";
  cin >> day;

  switch(day) {
    case(1):
      cout << "Sunday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(2):
      cout << "Monday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(3):
      cout << "Tuesday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(4):
      cout << "Wednesday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(5):
      cout << "Thursday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(6):
      cout << "Friday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    case(7):
      cout << "Saturday Schedule" << endl;
      cout << "Do you want to go back? [Y/N] ";
      cin >> back;
      break;
    default:
      cout << "That is not between 1-7; Please pick another number" << endl;
      main();
      break;
  }

  switch(back) {
    case('Y'):
      main();
      break;
    case('N'):
      cout << "Sure! See you around" << endl;
      break;
  }
  
  return 0;
}
