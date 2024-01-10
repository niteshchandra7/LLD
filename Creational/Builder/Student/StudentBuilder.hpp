#ifndef _STUDENT_BUILDER_H_
#define _STUDENT_BUILDER_H_
#include<string>
#include<vector>

class StudentBuilder:public Student {
    public:
    StudentBuilder* setRollNumber(int rollNumber){
        this->rollNumber = rollNumber;
        return this;
    }
    StudentBuilder* setAge(int age){
        this->age = age;
        return this;
    }
    StudentBuilder* setName(std::string name){
        this->name=name;
        return this;
    }
    StudentBuilder* setFathername(std::string name){
        this->fatherName=name;
        return this;
    }
    StudentBuilder* setMotherName(std::string motherName){
        this->motherName=motherName;
        return this;
    }
    virtual StudentBuilder* setSubjects()=0;
    Student* build(){
        Student* s =  new Student();
        s->rollNumber = this->rollNumber;
        s->age = this->age;
        s->name = this->name;
        s->fatherName = this->fatherName;
        s->motherName = this->motherName;
        s->subjects = this->subjects;
        return s;
    }

};

#endif