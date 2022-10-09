class Student
{
public:
    int age;
    char *name;

    Student(int age, char *name)
    {
        this->age = age;
        // copy constructor uses shallow copy
        // shallow copy should be avoided
        // this->name = name;
        // deep copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
    Student(Student const &s)
    {
        // to void s.age - 1 we are making const because we have used passed by ref
        this->age = s.age;
        // this is shallow copy
        // this->name = s.name;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }
    void display()
    {
        cout << "Name: " << this->name << " age: " << this->age;
    }
};