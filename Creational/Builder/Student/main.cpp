#include<iostream>
#include"Student.hpp"
#include"StudentBuilder.hpp"
#include"MBAStudentBuilder.hpp"
#include"EngineerStudent.hpp"
using namespace std;

int main(){
    StudentBuilder* esb = new EngineerStudentBuilder();
    esb->setAge(20)->setFathername("Himanshu")->setName("Rahul")->setMotherName("Priyanshi")->setRollNumber(7)->setSubjects();
    cout << esb->build()->toString();
    return 0;
}