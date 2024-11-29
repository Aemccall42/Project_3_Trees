#include "Bounty.h"

// Constructor
Bounty::Bounty(const string& name, int age, const string& eyeColor, const string& build, const string& bodyMark, const string& city)
: name(name), age(age), eyeColor(eyeColor), build(build), bodyMark(bodyMark), city(city) {}

// Destructor
Bounty::~Bounty() {}

// Accessor methods
string Bounty::getName() const { return name; }
int Bounty::getAge() const { return age; }
string Bounty::getEyeColor() const { return eyeColor; }
string Bounty::getBuild() const { return build; }
string Bounty::getBodyMark() const { return bodyMark;}
string Bounty::getCity() const { return city;} 

// Comparison operators
bool Bounty::operator<(const Bounty& other) const {
    return this->name < other.name; // Compare by name
}

bool Bounty::operator>(const Bounty& other) const {
    return this->name > other.name; // Compare by name
}

bool Bounty::operator==(const Bounty& other) const {
    return this->name == other.name; // Compare for equality by name
}

// Friend function for outputting the bounty information
ostream& operator<<(ostream& os, const Bounty& bounty) {
    os << "\n Name: "  << bounty.name 
       << "\n Age: " << bounty.age 
       << "\n Eye Color: " << bounty.eyeColor 
       << "\n Build: " << bounty.build
       << "\n Body Mark: " << bounty.bodyMark
       << "\n City: " << bounty.city;
    return os;
}





