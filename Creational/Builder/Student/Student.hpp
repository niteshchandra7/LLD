#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>
#include<vector>
#include<sstream>
class Student {
    public:
    int rollNumber;
    int age;
    std::string name;
    std::string fatherName;
    std::string motherName;
    std::vector<std::string> subjects;
    Student(){
    }
    std::string toString(){
        std::ostringstream oss;
        oss << " " << "rollNumber: " << this->rollNumber << std::endl;
        oss << " " << "age: " << this->age << std::endl;
        oss << " " << "name: " << this->name <<  std:: endl;
        oss << " " << "father name: " << this->fatherName <<  std::endl;
        oss << " " << "mother name: " << this->motherName <<  std::endl;
        oss << " " << "subjects: ";
        for (auto &subject:this->subjects) {
            oss << "\t" << subject;
        }
        oss << std::endl;
        return oss.str();
    }

};

#endif