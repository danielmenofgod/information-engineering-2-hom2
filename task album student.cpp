#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


class Student{

    std::string name;
    std::string surname;
    std::string album_number;
    std::vector<float> marks;

public:
    Student(){}

    Student(std::string n, std::string s, std::string a, std::vector<float> m){ // changed from "grades"
        name = n;
        surname = s;
        album_number = a;
        marks = m;
    }
    void set_fullname(std::string n, std::string s){
          name = n;
          surname = s;
      }

      std::string get_fullname(){
          return name + " " + surname;
      }

      void set_album_number(std::string a){
          if (a.size() >= 5 && a.size() <= 6) {
                      album_number = a;
                  }
          else {
              std::cout<<"Album number must be of length 5-6";
                  }

      }

      std::string get_album_number(){
          return album_number;
      }
    void add_grade(float mark){
        if(mark >= 2.0 && mark <= 5.0){
            marks.push_back(mark);
        }
        else {
            cout<<"Grade must be between 2.0 and 5.";
        };
    }
    float calculate_mean_grade() {
        if (marks.size() == 0) {
            return -1;  // to show there are no grades
        }
        float sum = 0.0;
        for (float mark : marks) {
            sum += mark;
        }
        return sum / marks.size();
    }

    bool check_if_passed() {
        int num_twos = 0;
        for (float mark : marks) {
            if (mark == 2.0) {
                num_twos++;
            }
            if (num_twos > 1) {
                return false;
            }
        }
        return true;
    }
    void display_summary() {
        cout << "Fullname: " << name + " " + surname << endl;
        cout << "Album number: " << album_number << endl;
        cout << "Marks: ";
        for (float mark : marks) {
            cout << mark << ", ";
        }
        cout << endl;
        cout << "Mean mark: " << calculate_mean_grade() << endl;
        if (check_if_passed()) {
            cout << "Passed the semester" << endl;
        } else {
            cout << "Failed the semester" << endl;
        }
        cout << endl;
    }



};
int main()
{

    Student s1;
        s1.set_fullname("Alice", "Smith");
        s1.set_album_number("151364");
        s1.add_grade(4.0);
        s1.add_grade(3.5);
        s1.add_grade(2.0);
        s1.display_summary();

    Student s2;
        s2.set_fullname("John", "Bella");
        s2.set_album_number("150692");
        s2.add_grade(2.0);
        s2.add_grade(3.5);
        s2.add_grade(2.0);
        s2.display_summary();

    return 0;
}
