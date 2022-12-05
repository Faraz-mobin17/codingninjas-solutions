template <typename T>

class Pair
{
    T x;
    T y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    void setY(T y)
    {
        this->y = y;
    }
    T getX()
    {
        return this->x;
    }
    T getY()
    {
        return this->y;
    }
};