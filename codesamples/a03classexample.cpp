#include <iostream>
#include <string>

class MedicalDevice {
private:
    int deviceID;
    std::string name;
    std::string manufacturer;

public:
    // Constructor to initialize the member variables
    MedicalDevice(int id, const std::string deviceName, const std::string deviceManufacturer)
        : deviceID(id), name(deviceName), manufacturer(deviceManufacturer) {}

    // Getter methods
    int getDeviceID() const {
        return deviceID;
    }

    std::string getName() const {
        return name;
    }

    std::string getManufacturer() const {
        return manufacturer;
    }
};

int main() {
    // Create an instance of MedicalDevice
    MedicalDevice myDevice(12345, "Blood Pressure Monitor", "HealthTech Inc.");

    // Access and print device information
    std::cout << "Device ID: " << myDevice.getDeviceID() << std::endl;
    std::cout << "Device Name: " << myDevice.getName() << std::endl;
    std::cout << "Manufacturer: " << myDevice.getManufacturer() << std::endl;

    return 0;
}



