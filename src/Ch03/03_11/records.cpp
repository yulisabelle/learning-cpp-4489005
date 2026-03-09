// Write your implementation code here

#include "records.h"

Student::Student(int the_id, std::string the_name){
    name = the_name;
    id = the_id;
}
std::string Student::get_name() const{
    return name;
}

int Student::get_id() const{
    return id;
}

Course::Course(int the_courseid, std::string the_coursename, u_int8_t the_credits){
    id=the_courseid;
    name=the_coursename;
    credits=the_credits;
}
int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}

Grade::Grade(int sid, int cid, char grd){
    student_id = sid;
    course_id=cid;
    grade=grd;
}