// Gaganjot Singh
// 22BCS14843
// Day 1 : 19 Dec 2024
// Day 1 : Assignment 1
// WORKSHEET -1- DWWC

#include <iostream>
using namespace std;

// 1)
// sum of natural number

int main()
{
    int n;
    cout << "Enter number of natural number sum you want:";
    cin >> n;
    int sum;
    sum = (n * (n + 1)) / 2;
    cout << "\n sum of first " << n << " numbers =" << sum;

    return 0;
}
// 2)

// sum of natural number
#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number of  number sum you want to check if it is prime:";
    cin >> n;
    if (isPrime(n))
    {
        cout << "\nNumber is prime ";
    }
    else
    {
        cout << "\n Number is not prime";
    }

    return 0;
}
// 3)

// sum of natural number
#include <iostream>
using namespace std;
void printOdd(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << "\n"
                 << i << "\n";
        }
    }
}
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    printOdd(n);

    return 0;
}
// 4)

// sum of natural number
#include <iostream>
using namespace std;
int sumOdd(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    return sum;
}
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    cout << "sum of odd num upto " << n << " :" << sumOdd(n);

    return 0;
}

// 5)

// sum of natural number
#include <iostream>
using namespace std;
void printTable(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << n << " X " << i << "  = " << i * n << " \n";
    }
}
int main()
{
    int n;
    cout << "Enter number whose table you want  :";
    cin >> n;
    printTable(n);

    return 0;
}
// 6)

// sum of natural number
#include <iostream>
using namespace std;
int count(int n)
{
    int digit = 0;
    if (n == 0)
    {
        digit = 1;
    }
    while (n > 0)
    {
        digit++;
        n /= 10;
    }

    return digit;
}
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    cout << "number of digit in  " << n << " :" << count(n);

    return 0;
}
7)
#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int digit = num % 10;             // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10;                        // Remove the last digit
    }
    return reversed;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversed = reverseNumber(number);
    cout << "The reversed number is: " << reversed << endl;

    return 0;
}

// 8)
#include <iostream>
using namespace std;

int largestDigit(int num)
{
    num = abs(num); // Handle negative numbers
    int largest = 0;

    while (num > 0)
    {
        int digit = num % 10; // Extract the last digit
        if (digit > largest)
        {
            largest = digit; // Update the largest digit
        }
        num /= 10; // Remove the last digit
    }

    return largest;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The largest digit in " << number << " is: " << largestDigit(number) << endl;

    return 0;
}

// 9)
#include <iostream>
using namespace std;

int largestDigit(int num)
{
    num = abs(num); // Handle negative numbers
    int largest = 0;

    while (num > 0)
    {
        int digit = num % 10; // Extract the last digit
        if (digit > largest)
        {
            largest = digit; // Update the largest digit
        }
        num /= 10; // Remove the last digit
    }

    return largest;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The largest digit in " << number << " is: " << largestDigit(number) << endl;

    return 0;
}

// 10)
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

// 11)
#include <iostream>
using namespace std;
int sumDigit(int n)
{
    int sum = 0;
    int digit;
    while (n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter number = ";
    cin >> n;
    cout << "\n sum of digit of " << n << " =" << sumDigit(n);
}

// 12)
#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double area(double radius)
{
    return 3.14159 * radius * radius; // πr²
}

// Function to calculate the area of a rectangle
double area(double length, double width)
{
    return length * width; // length × width
}

// Function to calculate the area of a triangle
double area(double base, double height, bool isTriangle)
{
    return 0.5 * base * height;
}

int main()
{
    // Circle
    double radius = 5.0;
    cout << "Area of the circle with radius " << radius << " is: " << area(radius) << endl;

    // Rectangle
    double length = 10.0, width = 6.0;
    cout << "Area of the rectangle with length " << length << " and width " << width << " is: " << area(length, width) << endl;

    // Triangle
    double base = 8.0, height = 4.0;
    cout << "Area of the triangle with base " << base << " and height " << height << " is: " << area(base, height, true) << endl;

    return 0;
}

// 13)
#include <iostream>
using namespace std;

// Function to calculate salary for an Intern
double calculateSalary(double stipend)
{
    return stipend;
}

// Function to calculate salary for a Regular Employee
double calculateSalary(double baseSalary, double bonuses)
{
    return baseSalary + bonuses;
}

// Function to calculate salary for a Manager
double calculateSalary(double baseSalary, double bonuses, double incentives)
{
    return baseSalary + bonuses + incentives;
}

int main()
{
    // Input for Intern
    double stipend;
    cout << "Enter the basic stipend for the Intern: ";
    cin >> stipend;
    cout << "Salary of Intern: " << calculateSalary(stipend) << endl;

    // Input for Regular Employee
    double baseSalary, bonuses;
    cout << "Enter the base salary and bonuses for the Regular Employee: ";
    cin >> baseSalary >> bonuses;
    cout << "Salary of Regular Employee: " << calculateSalary(baseSalary, bonuses) << endl;

    // Input for Manager
    double incentives;
    cout << "Enter the base salary, bonuses, and performance incentives for the Manager: ";
    cin >> baseSalary >> bonuses >> incentives;
    cout << "Salary of Manager: " << calculateSalary(baseSalary, bonuses, incentives) << endl;

    return 0;
}

// 14)
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student
{
protected:
    int rollNumber;
    string name;

public:
    void setStudentDetails(int roll, string studentName)
    {
        rollNumber = roll;
        name = studentName;
    }
    int getRollNumber()
    {
        return rollNumber;
    }
    string getName()
    {
        return name;
    }
};
class Result : public Student
{
private:
    int marks1, marks2, marks3; // Marks for three subjects
    int total;
    float percentage;

public:
    void setMarks(int m1, int m2, int m3)
    {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }
    void calculateResult()
    {
        total = marks1 + marks2 + marks3;
        percentage = (total / 300.0) * 100; // Calculate percentage out of 300
    }
    void displayResult()
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl; // Showing percentage with 2 decimal points
    }
};
int main()
{
    Result studentResult;
    int roll;
    string name;
    int m1, m2, m3;
    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    studentResult.setStudentDetails(roll, name);
    cout << "Enter marks for three subjects: ";
    cin >> m1 >> m2 >> m3;
    studentResult.setMarks(m1, m2, m3);
    studentResult.calculateResult();
    studentResult.displayResult();
    return 0;
}

// 15)
#include <iostream>
#include <iomanip>
using namespace std;
class Shape
{
public:
    virtual double calculateArea() const = 0; // Pure virtual function for area
    calculation
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() const override
    {
        return 3.14159 * radius * radius; // Area of circle: πr^2
    }
};
class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double calculateArea() const override
    {
        return length * breadth; // Area of rectangle: length * breadth
    }
};
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() const override
    {
        return 0.5 * base * height; // Area of triangle: 0.5 * base * height
    }
};
int main()
{
    Circle circle(7);
    Rectangle rectangle(10, 5);
    Triangle triangle(8, 6);
    Shape *shape;
    shape = &circle;
    cout << "Circle Area: " << fixed << setprecision(2) << shape->calculateArea()
         << endl;
    shape = &rectangle;
    cout << "Rectangle Area: " << fixed << setprecision(2) << shape -
        > calculateArea() << endl;
    shape = &triangle;
    cout << "Triangle Area: " << fixed << setprecision(2) << shape->calculateArea()
         << endl;
    return 0;
}

// 16)
#include <iostream>
#include <iomanip>
using namespace std;
class Shape
{
public:
    virtual double calculateArea() const = 0; // Pure virtual function, makes Shape
    an abstract class
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double calculateArea() const override
    {
        return 3.14159 * radius * radius; // Area of circle: πr^2
    }
};
class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double calculateArea() const override
    {
        return length * breadth;
    }
};
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double calculateArea() const override
    {
        return 0.5 * base * height; // Area of triangle: 0.5 * base * height
    }
};
int main()
{
    double radius, length, breadth, base, height;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    Shape *shape;
    shape = new Circle(radius);
    cout << "Circle Area: " << fixed << setprecision(2) << shape->calculateArea()
         << endl;
    shape = new Rectangle(length, breadth);
    cout << "Rectangle Area: " << fixed << setprecision(2) << shape -
        > calculateArea() << endl;
    shape = new Triangle(base, height);
    cout << "Triangle Area: " << fixed << setprecision(2) << shape->calculateArea()
         << endl;
    delete shape;
    return 0;
}

// 17)
#include <iostream>
#include <vector>
using namespace std;
void operate(vector<vector<int>> &A, vector<vector<int>> &B, int m, int n, int p,
             int operation)
{
    if (operation == 1)
    {
        if (A.size() != B.size() || A[0].size() != B[0].size())
        {
            cout << "Invalid dimensions for operation." << endl;
        }
        else
        {
            vector<vector<int>> result(m, vector<int>(n, 0));
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    result[i][j] = A[i][j] + B[i][j];
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}
void operate(vector<vector<int>> &A, vector<vector<int>> &B, int m, int n, int p,
             int operation)
{
    if (operation == 2)
    {
        if (A[0].size() != B.size())
        {
            cout << "Invalid dimensions for operation." << endl;
        }
        else
        {
            vector<vector<int>> result(m, vector<int>(p, 0));
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    for (int k = 0; k < n; k++)
                    {
                        result[i][j] += A[i][k] * B[k][j];
                    }
                }
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < p; j++)
                {
                    cout << result[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main()
{
    int m, n, p, operation;
    cout << "Enter the dimensions of Matrix A (m n): ";
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    cout << "Enter the elements of Matrix A:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the dimensions of Matrix B (n p): ";
    cin >> n >> p; // Note that n must match for matrix addition and multiplication
    vector<vector<int>> B(n, vector<int>(p));
    cout << "Enter the elements of Matrix B:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Enter the operation type (1 for Addition, 2 for Multiplication): ";
    cin >> operation;
    operate(A, B, m, n, p, operation);
    return 0;
}

// 18)
#include <iostream>
#include <cmath> // For M_PI (π)
using namespace std;
class Shape
{
public:
    virtual double getArea() const = 0; // Pure virtual function
    virtual ~Shape() {}                 // Virtual destructor to ensure proper cleanup
};
class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    double getArea() const override
    {
        return length * breadth;
    }
};
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    double getArea() const override
    {
        return 3.14159 * radius * radius; // Use π = 3.14159
    }
};
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() const override
    {
        return 0.5 * base * height;
    }
};
int main()
{
    int shapeType;
    cout << "Enter Shape Type (1 for Rectangle, 2 for Circle, 3 for Triangle): ";
    cin >> shapeType;
    Shape *shape = nullptr;
    if (shapeType == 1)
    {
        double length, breadth;
        cout << "Enter Length and Breadth of Rectangle: ";
        cin >> length >> breadth;
        shape = new Rectangle(length, breadth);
    }
    else if (shapeType == 2)
    {
        double radius;
        cout << "Enter Radius of Circle: ";
        cin >> radius;
        shape = new Circle(radius);
    }
    else if (shapeType == 3)
    {
        double base, height;
        cout << "Enter Base and Height of Triangle: ";
        cin >> base >> height;
        shape = new Triangle(base, height);
    }
    else
    {
        cout << "Invalid shape type!" << endl;
        return 1;
    }
    cout << "The area of the selected shape is: " << shape->getArea() << endl;
    delete shape;
    return 0;
}
19)
#include <iostream>
#include <string>
using namespace std;
class Book
{
protected:
    string title;
    string author;
    int ISBN;

public:
    Book(string t, string a, int isbn) : title(t), author(a), ISBN(isbn) {}
    void displayBook() const
    {
        cout << "\"" << title << "\" by " << author << " (ISBN: " << ISBN << ")";
    }
};
class Borrower
{
protected:
    string name;
    int id;

public:
    Borrower(string n, int i) : name(n), id(i) {}
    void displayBorrower() const
    {
        cout << "Borrower " << name << " (ID: " << id << ")";
    }
};
class Library : public Book, public Borrower
{
private:
    bool isBookBorrowed;

public:
    Library(string t, string a, int isbn, string n, int i)
        : Book(t, a, isbn), Borrower(n, i), isBookBorrowed(false) {}
    void borrowBook()
    {
        if (!isBookBorrowed)
        {
            cout << name << " (ID: " << id << ") has borrowed ";
            displayBook();
            cout << "." << endl;
            isBookBorrowed = true;
        }
        else
        {
            cout << "Book already borrowed by " << name << "." << endl;
        }
    }
    void returnBook()
    {
        if (isBookBorrowed)
        {
            cout << name << " (ID: " << id << ") has returned ";
            displayBook();
            cout << "." << endl;
            isBookBorrowed = false;
        }
        else
        {
            cout << "No book borrowed by " << name << "." << endl;
        }
    }
    void handleInvalidAction()
    {
        cout << "Invalid action type." << endl;
    }
};
int main()
{
    string title, author, name;
    int ISBN, id, action;
    cout << "Enter Book Details:" << endl;
    cout << "Title: ";
    getline(cin, title);
    cout << "Author: ";
    getline(cin, author);
    cout << "ISBN: ";
    cin >> ISBN;
    cin.ignore();
    cout << "Enter Borrower Details:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cin.ignore();
    Library library(title, author, ISBN, name, id);
    cout << "Enter Action (1 to Borrow, 2 to Return): ";
    cin >> action;
    switch (action)
    {
        library.borrowBook();
        break;
        library.returnBook();
        break;
        library.handleInvalidAction();
        break;
    }
    return 0;
}

// 20)
#include <iostream>
using namespace std;
class Account
{
protected:
    double balance;

public:
    Account(double b) : balance(b) {}
    virtual void calculateInterest() = 0;
};
class SavingsAccount : public Account
{
private:
    double interestRate;
    int time;

public:
    SavingsAccount(double b, double rate, int t) : Account(b), interestRate(rate),
                                                   time(t) {}
    void calculateInterest() override
    {
        double interest = balance * interestRate * time / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};
class CurrentAccount : public Account
{
private:
    double maintenanceFee;

public:
    CurrentAccount(double b, double fee) : Account(b), maintenanceFee(fee) {}
    void calculateInterest() override
    {
        balance -= maintenanceFee;
        cout << "Balance after fee deduction: " << balance << endl;
    }
};
int main()
{
    int accountType;
    double balance;
    cout << "Enter Account Type (1 for Savings, 2 for Current): ";
    cin >> accountType;
    cout << "Enter Account Balance: ";
    cin >> balance;
    if (accountType == 1)
    {
        double interestRate;
        int time;
        cout << "Enter Interest Rate (as percentage): ";
        cin >> interestRate;
        cout << "Enter Time (in years): ";
        cin >> time;
        SavingsAccount savings(balance, interestRate, time);
        savings.calculateInterest();
    }
    else if (accountType == 2)
    {
        // For Current Account: Input Maintenance Fee
        double maintenanceFee;
        cout << "Enter Monthly Maintenance Fee: ";
        cin >> maintenanceFee;
        CurrentAccount current(balance, maintenanceFee);
        current.calculateInterest();
    }
    else
    {
        cout << "Invalid account type." << endl;
    }
    return 0;
}
