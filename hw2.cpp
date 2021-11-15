#include "hw2_functions.h"
#include <iostream>
using namespace std;

int main()
{
    string file_name = "course_catalog.txt";
    class_type *data =  getClassesFromFile(file_name);
    getCourseSelections();
    
    return 0;
}

