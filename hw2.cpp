#include "hw2_functions.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string file_name = "course_catalog.txt";
    class_type *data =  getClassesFromFile(file_name);
    vector <int> input = getCourseSelections();
    displayCoursesAdded(input, data);
    return 0;
}

