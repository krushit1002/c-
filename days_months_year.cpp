#include <iostream> // Include necessary header for input/output stream

class Date { // Define a class named Date
  private: 
    int day; // Private member variable to store the day
    int month; // Private member variable to store the month
    int year; // Private member variable to store the year

  public:
    // Constructor to initialize Date object with provided day, month, and year
    Date(int d, int m, int y): day(d), month(m), year(y) {}

    // Member function to set the date
    void setDate(int d, int m, int y) {
      day = d; // Set day
      month = m; // Set month
      year = y; // Set year
    }

    // Member function to get the day
    int getDay() const {
      return day; // Return day
    }

    // Member function to get the month
    int getMonth() const {
      return month; // Return month
    }

    // Member function to get the year
    int getYear() const {
      return year; // Return year
    }

    // Member function to validate if the date is valid
    bool isValidDate() const {
      // Check if the month is valid
      if (month < 1 || month > 12)
        return false;

      // Check if the day is valid
      if (day < 1 || day > 31)
        return false;

      // Check for specific month-day combinations that are invalid
      if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return false;

      if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
          if (day > 29)
            return false;
        } else {
          if (day > 28)
            return false;
        }
      }

      // Date is valid
      return true;
    }
};

int main() {
  // Create a date object
  Date date(0, 0, 0); // Initialize Date object with default values

  // Set the date
  int day, month, year; // Define variables to store day, month, and year
  std::cout << "Input day: "; // Prompt user to input day
  std::cin >> day; // Input for day
  std::cout << "Input month: "; // Prompt user to input month
  std::cin >> month; // Input for month
  std::cout << "Input year: "; // Prompt user to input year
  std::cin >> year; // Input for year

  date.setDate(day, month, year); // Set Date object with provided values

  // Get and display the date
  std::cout << "Date: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl; // Output date

  // Validate the date
  if (date.isValidDate())
    std::cout << "The date is valid." << std::endl; // Output for a valid date
  else
    std::cout << "The date is invalid." << std::endl; // Output for an invalid date

  return 0; // Return 0 to indicate successful completion
}

