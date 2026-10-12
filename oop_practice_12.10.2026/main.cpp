#include <iostream>
#include <list>
using namespace std;

class Student
{
    string name;
    double marks;
public:
    Student(string n, double m)
    {
        name = n;
        marks = m;
    }
    
    void Show()
    {
        cout << "Name of student is: " << name << endl;
        cout << "Mark of student is: " << marks << endl;
    }
    
    double GetMarks()
    {
        return marks;
    }
};

int main()
{
    list<Student> students;
    
    students.push_back(Student("Alex", 8));
    students.push_back(Student("Vitya", 9));
    students.push_back(Student("Peter", 7));
    students.push_back(Student("Oleg", 10));
    students.push_back(Student("Max", 12));
    
    cout << "All students: " << endl;
    
    for (Student& s : students)
    {
        s.Show();
    }
    
    auto max = students.begin();
    
    for(auto ptr = students.begin(); ptr != students.end(); ptr++)
        {
        if (ptr->GetMarks() > max->GetMarks())
        {
            max = ptr;
        }
    }
    
    cout << "Best marks is: " << endl;
    max->Show();
}
