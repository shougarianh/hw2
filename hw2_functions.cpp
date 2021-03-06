#include "hw2_functions.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class_type * getClassesFromFile(string file)
{
    static class_type data[20]; // made static so that not using stack memory
    ifstream fin;
    do
    {
        fin.clear();
        fin.open(file);
    } while(!fin);
    int i = 0;
    string temp = "";
    while (fin >> data[i].name)
    {
        fin >> temp;
        data[i].code = temp;
        data[i].year =  (int)temp[0] - 48; // using ascii to convert to int
        data[i].course_num =  (int)temp[2] - 48; // using ascii to convert to int
        data[i].version =  (int)temp[4] - 48; // using ascii to convert to int
        i++;
    }
    fin.close();
    return data;
}

bool graduationEligibility(class_type* courses)
{
    if (sizeof(courses) < 8)
    {
        return false;
    }
    return true;
}


vector<class_type> getCourseSelections(class_type *data)
{
    int num_courses = 0;
    cout << "Enter the number of available courses..." << endl;
    cin >>  num_courses;
    vector<class_type> courses;
    int temp = 0;
    for (int i = 0; i < num_courses; i++)
    {
        cout<< "Enter which course you are taking..." <<  endl;
        cin >> temp;
        courses.push_back(data[temp]);
    }
    cout << endl;
    return courses;
}

void displayCoursesAdded(vector <class_type> courses)
{
    for (auto i = courses.begin(); i != courses.end(); i++)
    {
        auto current = *i;
        cout << current.code << " (" << current.name << " added)" << endl;
    }
}