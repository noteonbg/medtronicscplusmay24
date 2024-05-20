#include <iostream>

class Battery{
    

};

class Sim  {};



class Mobile
{
    
public:

    void makeCall();
    void recieveCall();
    Mobile(Sim *sim);
private:
    Battery battery;
    Sim *sim; // first check for association
    //then judge whether it is aggregatation or composition.
};


int main()
{
    Sim sim;
    Mobile m(&sim);
    std::cout << "does this work";
    return 0;
}