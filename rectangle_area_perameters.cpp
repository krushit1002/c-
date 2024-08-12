#include <iostream> // Include necessary header for input/output stream

class Rectangle { // Define a class named Rectangle
  private: 
    double length; // Private member to store the length of the rectangle
    double width; // Private member to store the width of the rectangle

  public:
    // Constructor to initialize the Rectangle object with length and width
    Rectangle(double len, double wid): length(len), width(wid) {}

    // Member function to calculate the area of the rectangle
    double calculateArea() {
      return length * width; // Formula to calculate the area of a rectangle
    }

    // Member function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
      return 2 * (length + width); // Formula to calculate the perimeter of a rectangle
    }
};

int main() {
  double length, width;
  std::cout << "Input the length of the rectangle: ";
  std::cin >> length; // Input the length of the rectangle from the user
  std::cout << "Input the width of the rectangle: ";
  std::cin >> width; // Input the width of the rectangle from the user

  // Create a rectangle object with the provided length and width
  Rectangle rectangle(length, width);

  // Calculate and display the area of the rectangle
  double area = rectangle.calculateArea(); // Calculate the area using the Rectangle object
  std::cout << "\nArea: " << area << std::endl; // Output the calculated area

  // Calculate and display the perimeter of the rectangle
  double perimeter = rectangle.calculatePerimeter(); // Calculate the perimeter using the Rectangle object
  std::cout << "Perimeter: " << perimeter << std::endl; // Output the calculated perimeter

  return 0; // Return 0 to indicate successful completion
}

