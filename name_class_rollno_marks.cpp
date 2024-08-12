#include <iostream> // Include necessary header for input/output stream
#include <string> // Include necessary header for string handling

class Student { // Define a class named Student
  private: 
    std::string name; // Private member variable to store student's name
    std::string studentClass; // Private member variable to store student's class
    int rollNumber; // Private member variable to store student's roll number
    double marks; // Private member variable to store student's marks

  public:
    // Constructor to initialize Student object with provided details
    Student(const std::string & studentName, const std::string & sClass, int rollNum, double studentMarks)
        : name(studentName), studentClass(sClass), rollNumber(rollNum), marks(studentMarks) {}

    // Member function to calculate the grade based on marks
    std::string calculateGrade() {
      if (marks >= 90) {
        return "A+";
      } else if (marks >= 80) {
        return "A";
      } else if (marks >= 70) {
        return "B";
      } else if (marks >= 60) {
        return "C";
      } else {
        return "D";
      }
    }

    // Member function to display student information
    void displayInformation() {
      std::cout << "\n\nName: " << name << std::endl; // Output student's name
      std::cout << "Class: " << studentClass << std::endl; // Output student's class
      std::cout << "Roll Number: " << rollNumber << std::endl; // Output student's roll number
      std::cout << "Marks: " << marks << std::endl; // Output student's marks
      std::cout << "Grade: " << calculateGrade() << std::endl; // Output student's grade
    }
};

int main() {
  // Create a student object
  std::string studentName; // Variable to store student's name
  std::string sClass; // Variable to store student's class
  int rollNum; // Variable to store student's roll number
  double studentMarks; // Variable to store student's marks

  std::cout << "Student details: "; // Prompt user for student details
  std::cout << "\nName: "; // Prompt user for student's name
  std::getline(std::cin, studentName); // Input student's name

  std::cout << "Class: "; // Prompt user for student's class
  std::getline(std::cin, sClass); // Input student's class

  std::cout << "Roll number: "; // Prompt user for student's roll number
  std::cin >> rollNum; // Input student's roll number

  std::cout << "Marks (0-100): "; // Prompt user for student's marks
  std::cin >> studentMarks; // Input student's marks

  Student student(studentName, sClass, rollNum, studentMarks); // Create Student object with provided details

  // Display student information
  student.displayInformation(); // Output student's information

  return 0; // Return 0 to indicate successful completion
}

