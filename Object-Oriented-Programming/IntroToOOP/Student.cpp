#include <iostream>

// TODO: Define your "Student" class below with constructor
// and getter/setter methods
class Student
{

  // define private attributes
private:
  // student name
  std::string name;
  // years of study
  int grade;
  // GPA
  float gpa;

public:
  // write a public constructor for Student
  // that takes name, grade, and GPA
  // and initializes the private attributes
  Student(std::string studentName, int studentGrade, float studentGPA) {
    name = studentName;
    grade = studentGrade;
    gpa = studentGPA;
  }

  // getter for student name
  std::string getName() {
    return name;
  }
  // getter for years of study
  int getGrade() {
    return grade;
  }
  // getter for student's GPA
  float getGPA() {
    return gpa;
  }

  // setter for student's name
  void setName(std::string studentName) {
    name = studentName;
  } 
  // setter for years of study
  void setGrade(int studentGrade) {
    grade = studentGrade;
  }
  // setter for GPA
  void setGPA(float studentGPA) {
    gpa = studentGPA;
  }
};

int main() {
  // Test instantiation and getters / setters
  Student student = Student("John Doe", 6, 3.4);

  std::cout << "Student Name:  " << student.getName() << "\n";
  std::cout << "Student grade:  " << student.getGrade() << "\n";
  std::cout << "Student GPA:  " << student.getGPA() << "\n\n";

  student.setName("Billy Zoom");
  student.setGrade(5);
  student.setGPA(4.0);

  std::cout << "Student Name:  " << student.getName() << "\n";
  std::cout << "Student grade:  " << student.getGrade() << "\n";
  std::cout << "Student GPA:  " << student.getGPA() << "\n";
}