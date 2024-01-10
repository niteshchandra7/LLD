#ifndef _ENGINEER_STUDENT_BUILDER_
#define _ENGINEER_STUDENT_BUILDER_
#include "StudentBuilder.hpp"

class EngineerStudentBuilder:public StudentBuilder {
    public:
    StudentBuilder* setSubjects(){
        std::vector<std::string> subs;
        subs.push_back("DSA");
        subs.push_back("Computer Networks");
        subs.push_back("Database Management");
        this->subjects = subs;
        return this;
    }
};

#endif