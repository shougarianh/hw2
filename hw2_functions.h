# include <iostream>
# include <vector>
using namespace std;

struct class_type
{
    string name;
    string code;
    int year;
    int course_num;
    int version;
    bool operator< (class_type &second){
        if (year < second.year)
        {
            return true;
        }
        else if (year == second.year)
        {
            if (course_num < second.course_num)
            {
                return true;
            }
            else if (course_num == second.course_num)
            {
                if (version < second.version)
                {
                    return true;
                }
                return false;
            }
        }
        return false;
    }

};

class_type * getClassesFromFile(string file);

bool graduationEligibility(class_type* courses);

vector<int> getCourseSelections();

void displayCoursesAdded(vector <int> input, class_type* data);

