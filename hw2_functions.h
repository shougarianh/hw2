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
    /*

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
    */
   bool operator< (class_type &second)
   {
       if (year < second.year)
       {
           return true;
       }
       return false;
   }

};

class_type * getClassesFromFile(string file);

bool graduationEligibility(class_type* courses);

vector<class_type> getCourseSelections(class_type *data);

void displayCoursesAdded(vector <class_type> data);

