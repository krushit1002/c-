#include <iostream> // Include necessary header for input/output stream

class Triangle { // Define a class named Triangle
  private: 
    double side1; // Private member variable to store side1 of the triangle
    double side2; // Private member variable to store side2 of the triangle
    double side3; // Private member variable to store side3 of the triangle

  public:
    // Constructor to initialize Triangle object with provided side lengths
    Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {}

    // Member function to determine the type of the triangle
    void determineType() {
      if (side1 == side2 && side2 == side3) { // Check if all sides are equal
        std::cout << "Equilateral Triangle" << std::endl; // Output if all sides are equal
      } else if (side1 == side2 || side1 == side3 || side2 == side3) { // Check if at least two sides are equal
        std::cout << "Isosceles Triangle" << std::endl; // Output if at least two sides are equal
      } else {
        std::cout << "Scalene Triangle" << std::endl; // Output if no sides are equal
      }
    }
};

int main() {
  // Create a triangle object
  double s1, s2, s3; // Define variables for side lengths
  std::cout << "Input the lengths of the three sides of the triangle:\n"; // Prompt user to input side lengths
  std::cout << "Side1: ";
  std::cin >> s1; // Input for side1
  std::cout << "Side2: ";
  std::cin >> s2; // Input for side2
  std::cout << "Side3: ";
  std::cin >> s3; // Input for side3

  Triangle triangle(s1, s2, s3); // Create Triangle object with provided side lengths

  // Determine the type of triangle and output the result
  triangle.determineType(); // Call determineType method to identify the triangle type

  return 0; // Return 0 to indicate successful completion
}

