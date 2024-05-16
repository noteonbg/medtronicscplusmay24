#include <iostream>
#include <string>
using namespace std;

class MedicalDevice {
private:
    string deviceName;
    string serialNumber;
    int manufacturerID;

public:
    // Constructor to initialize attributes
    MedicalDevice(const string& name, const string& serial, int manufID)
        : deviceName(name), serialNumber(serial), manufacturerID(manufID) {}

    // Method to display device details
    void displayDetails() {
        cout << "Device Name: " << deviceName << endl;
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Manufacturer ID: " << manufacturerID << endl;
    }
};

int main()
{
    MedicalDevice medicalDevice("Blood Pressure Monitor", "BP12345", 1001);
    MedicalDevice* devicePtr = &medicalDevice;
    devicePtr->displayDetails();


}



#if 0
int main() {
    // Create a MedicalDevice object dynamically (on the heap) using a pointer
    MedicalDevice* devicePtr = new MedicalDevice("Blood Pressure Monitor", "BP12345", 1001);

    // Access object attributes using the pointer
    cout << "Device details:" << endl;
    devicePtr->displayDetails();

    // Don't forget to delete the dynamically allocated object
    delete devicePtr;

    return 0;
}
#endif

