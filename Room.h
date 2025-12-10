#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room {
private:
    int roomNumber;
    std::string roomType;
    double pricePerNight;
    bool isAvailable;
    int maxOccupancy;

public:
    // Constructor
    Room(int number, std::string type, double price, int maxOccup);
    
    // Getters
    int getRoomNumber() const;
    std::string getRoomType() const;
    double getPricePerNight() const;
    bool getIsAvailable() const;
    int getMaxOccupancy() const;
    
    // Setters
    void setRoomType(const std::string& type);
    void setPricePerNight(double price);
    void setIsAvailable(bool available);
    void setMaxOccupancy(int max);
    
    // Display room details
    void displayRoomInfo() const;
    
    // Book and check out room
    void bookRoom();
    void checkOutRoom();
    
    // Check if room is suitable for number of guests
    bool canAccommodate(int numGuests) const;
};

#endif