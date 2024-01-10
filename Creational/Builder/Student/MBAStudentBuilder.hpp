#ifndef _MBA_STUDENT_BUILDER_
#define _MBA_STUDENT_BUILDER_
#include "StudentBuilder.hpp"

class MBAStudentBuilder:public StudentBuilder {
    public:
    StudentBuilder* setSubjects(){
        std::vector<std::string> subs;
        subs.push_back("Micro Economics");
        subs.push_back("Business Studies");
        subs.push_back("Ooperations Management");
        this->subjects = subs;
        return this;
    }
    MBAStudentBuilder(){}

};

#endif