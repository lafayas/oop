/*You are writing a "pretty printer" program that prints out student transcripts for all students enrolled in a degree. The students and their grades are encoded in a multi-dimensional array called "report_card" in which each row represents a student, and each column represents a course.

All course names are encoded in a "courses" array, with the understanding that column Y in the "report_card" is element Y in the "courses" array. In a similar manner, all student names are encoded in a "students" array and the student name at index X corresponds to row X in the "report_card".

Your "pretty_printer" program should define and initialize these three arrays and print them to stdout using a function.

Signature: void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);*/
#include <iostream>
using namespace std;
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
{
    cout<< "Report Cards: ";
    
    for (int i = 0; i < 4; i++)
    {
        cout<< courses[i];
        if (i < 3)
        {
            cout<< " ";
        }
    }
    cout<< "\n";
    for (int i = 0; i < nstudents; i++)
    {   
        cout<< students[i]<< " ";
        
        for (int j = 0; j < 4; j++)
        {
            cout << report_card[i][j];
            if (j < 3)
            {
                cout<< " ";
            }
            
            
        }
        cout<< "\n";
    }
}