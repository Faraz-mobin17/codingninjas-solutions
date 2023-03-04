#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // vector<int> *vp = new vector<int>(); // dynamic allocation
    vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // // v[1] = 100;
    // // v[3] = 1002;
    // // v[4] = 1234; // if you do this vector size will not increase
    // v.push_back(23);
    // v.push_back(234);
    /*
     * assumed output 10 100 30 1002 1234 23 234
     * output acheived 10 100 30 23 234 somegarbage_value somegarbage_value (NOTE: Different compiler will show different output)
     * [] -> this will be used for update data and to get the data
     */
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
    // cout << v[3] << endl;
    // cout << v[4] << endl;
    // cout << v[5] << endl;
    // cout << v[6] << endl;

    // cout << "Size: " << v.size() << endl;
    // cout << v.at(2) << endl;
    // cout << v.at(6) << endl; // this will throw an error that is easy to understand at() is much safer than accessing unreacable elements uisng []
    // for (int i = 0; i < v.size(); i += 1)
    // {
    //     cout << v.at(i) << " ";
    //     // cout << v[i] << " "; // we can use both
    // }
    // cout << endl;
    // v.pop_back();
    // cout << "Size: " << v.size() << endl;

    for (int i = 0; i < 100; i += 1)
    {
        cout << "Capacity: " << v.capacity() << endl;
        cout << "Size: " << v.size() << endl;
        v.push_back(i + 1);
    }
    return 0;
}