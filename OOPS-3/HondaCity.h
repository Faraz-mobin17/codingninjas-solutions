class HondaCity : public Car
{
public:
    // HondaCity()
    // {
    //     cout << "Honda City Constructor " << endl;
    // }
    HondaCity(int x, int y) : Car(x, y)
    {
        cout << "Honda City Constructor " << endl;
    }
    ~HondaCity()
    {
        cout << "Honda city destructor " << endl;
    }
};