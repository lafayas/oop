#include <iostream>
using namespace std;
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);
int main()
{
    string courses[4] = {"Maths", "English", "Chemistry", "P.E."};
    string students[2] = {"Ben", "Tom"};
    int report_card[2][4] = {{100, 100, 100, 100}, {100, 100, 100, 100}};
    print_class(courses, students, report_card, 2);
}