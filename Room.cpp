#include "Room.h"
#include <iostream>
#include <iomanip>

// Constructor
Room::Room(int number, std::string type, double price, int maxOccup) 
    : roomNumber(number), roomType(type), pricePerNight(price), 
      isAvailable(true), maxOccupancy(maxOccup) {}

// Getters
int Room::getRoomNumber() const {
    return roomNumber;
}

std::string Room::getRoomType() const {
    return roomType;
}

double Room::getPricePerNight() const {
    return pricePerNight;
}

bool Room::getIsAvailable() const {
    return isAvailable;
}

int Room::getMaxOccupancy() const {
    return maxOccupancy;
}

// Setters
void Room::setRoomType(const std::string& type) {
    roomType = type;
}

void Room::setPricePerNight(double price) {
    pricePerNight = price;
}

void Room::setIsAvailable(bool available) {
    isAvailable = available;
}

void Room::setMaxOccupancy(int max) {
    maxOccupancy = max;
}

// Display room details
void Room::displayRoomInfo() const {
    std::cout << "Room Number: " << roomNumber << std::endl;
    std::cout << "Type: " << roomType << std::endl;
    std::cout << "Price per Night: $" << std::fixed << std::setprecision(2) 
              << pricePerNight << std::endl;
    std::cout << "Max Occupancy: " << maxOccupancy << " person(s)" << std::endl;
    std::cout << "Status: " << (isAvailable ? "Available" : "Occupied") << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

// Book room
void Room::bookRoom() {
    if (isAvailable) {
        isAvailable = false;
        std::cout << "Room " << roomNumber << " has been booked successfully." << std::endl;
    } else {
        std::cout << "Room " << roomNumber << " is already occupied." << std::endl;
    }
}

// Check out room
void Room::checkOutRoom() {
    if (!isAvailable) {
        isAvailable = true;
        std::cout << "Room " << roomNumber << " has been checked out successfully." << std::endl;
    } else {
        std::cout << "Room " << roomNumber << " is already available." << std::endl;
    }
}

// Check occupancy
bool Room::canAccommodate(int numGuests) const {
    return numGuests <= maxOccupancy;
}