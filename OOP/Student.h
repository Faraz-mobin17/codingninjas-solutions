
class Student
{
    int age;

public:
    int rollNumber;
    ~Student() { cout << "Destructor Called" << endl; }
    // Default constructor
    // Student() {
    //     cout << "constructor called !" << endl;

    // }
    Student(int rollNumber)
    {
        cout << "constructor 2 called ! " << endl;
        this->rollNumber = rollNumber;
    }
    Student(int a, int r)
    {
        cout << " This : " << this << endl;
        cout << "Constructor 3 called ! " << endl;
        this->age = a;
        this->rollNumber = r;
    }
    void display()
    {
        cout << age << " " << rollNumber << endl;
    }
    int getAge()
    {
        return age;
    }
    void setAge(int a, int password)
    {
        if (password != 123)
        {
            return;
        }
        if (a < 0)
        {
            return;
        }
        age = a;
    }
};