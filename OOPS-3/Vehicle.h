using namespace std;
class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTypres;

public:
    string color;
    // Vehicle()
    // {
    //     cout << "Vehicle's default constructor " << endl;
    // }
    Vehicle(int z)
    {
        cout << "Vehicle Params Constructor called: " << endl;
        maxSpeed = z;
    }
    ~Vehicle()
    {
        cout << "Vehicle's Destructor " << endl;
    }
};
