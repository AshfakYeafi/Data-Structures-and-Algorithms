#include <iostream>
using namespace std;

class Resistance
{
private:
    float volt, R_val;
    friend class Resistance1;

public:
    void set(float v, float r)
    {
        volt = v;
        R_val = r;
    }
    
};
class Resistance1 : public Resistance
{
public:
    float show_power()
    {
        return (volt*volt)/R_val;
        
    }
};
int main(int argc, char const *argv[])
{
    Resistance1 obj;
    obj.set(15, 6);
    cout<<obj.show_power()<<endl;
    return 0;
}
