#include <iostream> // Include necessary header for input/output stream
#include <string> // Include necessary header for string operations

class Person { // Define a class named Person
  private: 
    std::string name; // Private member to store the name of the person
    int age; // Private member to store the age of the person
    std::string country; // Private member to store the country of the person

  public:
    // Setter functions to set the private member variables
    void setName(const std::string & n) { // Setter function for the name
      name = n; // Assign the provided name to the 'name' member variable
    }

    void setAge(int a) { // Setter function for the age
      age = a; // Assign the provided age to the 'age' member variable
    }

    void setCountry(const std::string & c) { // Setter function for the country
      country = c; // Assign the provided country to the 'country' member variable
    }

    // Getter functions to retrieve the private member variables
    std::string getName() { // Getter function for retrieving the name
      return name; // Return the stored name
    }

    int getAge() { // Getter function for retrieving the age
      return age; // Return the stored age
    }

    std::string getCountry() { // Getter function for retrieving the country
      return country; // Return the stored country
    }
};

int main() {
  // Create a person object
  Person person;

  // Set the person's details using setter functions
  person.setName("Saveli Sujatha"); // Set the person's name
  person.setAge(25); // Set the person's age
  person.setCountry("USA"); // Set the person's country

  // Get and display the person's details using getter functions
  std::cout << "Name: " << person.getName() << std::endl; // Output the person's name
  std::cout << "Age: " << person.getAge() << std::endl; // Output the person's age
  std::cout << "Country: " << person.getCountry() << std::endl; // Output the person's country

  return 0; // Return 0 to indicate successful completion
}

