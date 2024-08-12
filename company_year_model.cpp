#include <iostream> // Including the necessary header for input/output stream
#include <string> // Including the necessary header for string operations

class Car { // Defining a class named Car
  private: 
    std::string company; // Private member to store the company name of the car
    std::string model; // Private member to store the model name of the car
    int year; // Private member to store the year of the car

  public:
    // Constructor to initialize Car object with provided values
    Car(const std::string & comp, const std::string & mdl, int yr): company(comp), model(mdl), year(yr) {}

    // Getter functions to retrieve private member variables
    std::string getCompany() { // Getter function for retrieving the company name
      return company; // Return the stored company name
    }

    std::string getModel() { // Getter function for retrieving the model name
      return model; // Return the stored model name
    }

    int getYear() { // Getter function for retrieving the year
      return year; // Return the stored year
    }

    // Setter functions to modify private member variables
    void setCompany(const std::string & comp) { // Setter function for modifying the company name
      company = comp; // Assign the provided company name to the 'company' member variable
    }

    void setModel(const std::string & mdl) { // Setter function for modifying the model name
      model = mdl; // Assign the provided model name to the 'model' member variable
    }

    void setYear(int yr) { // Setter function for modifying the year
      year = yr; // Assign the provided year to the 'year' member variable
    }
};

int main() {
  // Create a car object with initial values
  Car car("AUDI", "A6", 2023);

  // Get and display the car details using getter functions
  std::cout << "Company: " << car.getCompany() << std::endl; // Output the car's company name
  std::cout << "Model: " << car.getModel() << std::endl; // Output the car's model name
  std::cout << "Year: " << car.getYear() << std::endl; // Output the car's year

  // Set new values for the car using setter functions
  car.setCompany("BMW"); // Update the car's company name
  car.setModel("M4"); // Update the car's model name
  car.setYear(2022); // Update the car's year

  // Get and display the updated car details using getter functions
  std::cout << "\nUpdated Company: " << car.getCompany() << std::endl; // Output the updated car's company name
  std::cout << "Updated Model: " << car.getModel() << std::endl; // Output the updated car's model name
  std::cout << "Updated Year: " << car.getYear() << std::endl; // Output the updated car's year

  return 0; // Return 0 to indicate successful completion
}

