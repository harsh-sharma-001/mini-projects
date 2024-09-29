#include <iostream>  // For input and output operations
#include <string>    // For string data type

// Define a structure named Student
struct Student {
    int rollNo;      // Field for student's roll number (integer)
    std::string name;  // Field for student's name (string)
    int age;         // Field for student's age (integer)
    float marks;     // Field for student's marks (float to handle decimal values)
};

int main() {
    // Create an array of 10 students and initialize it with sample data
    Student students[10] = {
        {1, "John Doe", 18, 85.5},
        {2, "Jane Smith", 19, 90.0},
        {3, "Samuel Lee", 17, 75.5},
        {4, "Emily Davis", 18, 88.0},
        {5, "Michael Brown", 19, 92.0},
        {6, "Sarah Wilson", 18, 81.5},
        {7, "David Miller", 17, 79.0},
        {8, "Olivia Taylor", 19, 93.5},
        {9, "James Anderson", 18, 84.0},
        {10, "Sophia Thomas", 18, 89.5}
    };

    // Loop through the array and display the details of each student
    std::cout << "Student Details:\n";
    for (int i = 0; i < 10; i++) {
        std::cout << "Roll No: " << students[i].rollNo << std::endl;
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Age: " << students[i].age << std::endl;
        std::cout << "Marks: " << students[i].marks << std::endl;
        std::cout << "-----------------------" << std::endl;
    }

    return 0;  // End the program
}