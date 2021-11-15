# include <iostream>
using namespace std;

struct class_type
{
    string name;
    string code;
    int year;
    int course_num;
    int version;

};

class_type * getClassesFromFile(string file);

bool graduationEligibility(class_type* courses);

int * getCourseSelections();

int getNumberOfCourses();