#include "hw2_functions.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool courseComparator(class_type a, class_type b);

int main()
{
    string file_name = "course_catalog.txt";
    class_type *data =  getClassesFromFile(file_name);
    vector <class_type> courses = getCourseSelections(data);
    displayCoursesAdded(courses);
    cout << endl;
    sort(courses.begin(), courses.end(), courseComparator);
    class_type first_class = *courses.begin();
    int lowest_course_number = first_class.course_num;
    int lowest_version_number = first_class.version;
    displayCoursesAdded(courses);
    cout << endl;
    for (auto i = courses.begin(); i != courses.end(); i++)
    {
        class_type temp = *i;
        if ((lowest_course_number > temp.course_num) || (lowest_version_number > temp.version))
        {
            courses.erase(i);
        }
        lowest_course_number = temp.course_num;
        lowest_version_number = temp.version;
    }
    displayCoursesAdded(courses);
    return 0;
}

bool courseComparator(class_type a, class_type b){
            
        if (a.year < b.year)
        {
            return true;
        }
        else if (a.year == b.year)
        {
            if (a.course_num < b.course_num)
            {
                return true;
            }
            else if (a.course_num == b.course_num)
            {
                if (a.version < b.version)
                {
                    return true;
                }
                return false;
            }
        }
        return false;
}
