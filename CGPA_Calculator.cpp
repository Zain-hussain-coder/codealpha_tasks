#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int courses;

    cout << "===== CGPA Calculator =====\n";

    cout << "Enter number of courses: ";
    cin >> courses;

    float totalCreditHours = 0;
    float totalGradePoints = 0;

    for(int i = 1; i <= courses; i++)
    {
        float grade;
        float creditHours;

        cout << "\nCourse " << i << endl;

        cout << "Enter grade points (0-4): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> creditHours;


        totalCreditHours += creditHours;

        totalGradePoints += (grade * creditHours);
    }


    float GPA = totalGradePoints / totalCreditHours;


    cout << fixed << setprecision(2);

    cout << "\nTotal Credit Hours: "
         << totalCreditHours << endl;


    cout << "Semester GPA: "
         << GPA << endl;


    float previousCGPA;

    cout << "\nEnter Previous CGPA: ";
    cin >> previousCGPA;


    float finalCGPA = (previousCGPA + GPA) / 2;


    cout << "Final CGPA: "
         << finalCGPA << endl;


    return 0;
}
