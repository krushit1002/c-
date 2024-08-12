#include <iostream> // Include necessary header for input/output stream
#include <string> // Include necessary header for handling strings

class Employee { // Define a class named Employee
  private: 
    std::string name; // Private member variable to store employee name
    int employeeId; // Private member variable to store employee ID
    double salary; // Private member variable to store employee salary

  public:
    // Constructor to initialize Employee object with provided details
    Employee(const std::string & empName, int empId, double empSalary): name(empName), employeeId(empId), salary(empSalary) {}

    // Member function to calculate salary based on performance rating
    void calculateSalary(double performanceRating) {
      if (performanceRating >= 0.0 && performanceRating <= 1.4) { // Check if performance rating is within valid range
        salary *= performanceRating; // Calculate updated salary based on performance rating
      } else {
        std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl; // Output for an invalid performance rating
      }
    }

    // Member function to set salary
    void setSalary(double empSalary) {
      salary = empSalary; // Set employee salary
    }

    // Member function to get employee name
    std::string getName() const {
      return name; // Return employee name
    }

    // Member function to get employee ID
    int getEmployeeId() const {
      return employeeId; // Return employee ID
    }

    // Member function to get employee salary
    double getSalary() const {
      return salary; // Return employee salary
    }
};

int main() {
  // Create an employee object
  std::string empName; // Define variable to store employee name
  int empId; // Define variable to store employee ID
  double empSalary; // Define variable to store employee salary

  std::cout << "Input employee name: "; // Prompt user to input employee name
  std::cin >> empName; // Input for employee name

  std::cout << "Input employee ID: "; // Prompt user to input employee ID
  std::cin >> empId; // Input for employee ID

  std::cout << "Input employee salary: "; // Prompt user to input employee salary
  std::cin >> empSalary; // Input for employee salary

  Employee employee(empName, empId, empSalary); // Create Employee object with provided details

  // Calculate and display initial salary
  std::cout << "Initial salary: " << employee.getSalary() << std::endl; // Output initial salary

  // Perform salary calculation based on performance rating
  double performanceRating; // Define variable to store performance rating
  std::cout << "Input performance rating (0.0-1.2): "; // Prompt user to input performance rating
  std::cin >> performanceRating; // Input for performance rating

  employee.calculateSalary(performanceRating); // Calculate updated salary based on performance

  // Display updated salary
  std::cout << "Updated salary: " << employee.getSalary() << std::endl; // Output updated salary

  return 0; // Return 0 to indicate successful completion
}

