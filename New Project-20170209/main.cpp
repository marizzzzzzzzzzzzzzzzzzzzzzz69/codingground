#include <iostream>
#include <ctime>

using namespace std;

int MyBirthYear(int age)
{
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    int year = now->tm_year + 1900;
    return year - age;
}

int main()
{
    
   int age = 13;
   int myYear = MyBirthYear(age);
   
   cout << "Your birth year is:" << age << endl;
   
   return 0;
}



