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
    os << "Name: "  << bounty.name 
       << ", Age: " << bounty.age 
       << ", Eye Color: " << bounty.eyeColor 
       << ", Build: " << bounty.build
       << ", Body Mark: " << bounty.bodyMark
       << ", City: " << bounty.city;
    return os;
}







/*
#include "Bounty.h"

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

Bounty::Bounty()
{

}

Bounty::Bounty(string n, int a, string e, string b, string c, string m)
{
    name= n;
    age=a;
    eyeColor=e;
    build=b;
    city=c; 
    bodyMark=m;
}
string Bounty::getName() const
{
    return name;
}
int Bounty::getAge() const
{
    return age;
}
string Bounty::getEyeColor()const
{
    return eyeColor;
}
string Bounty::getBuild() const 
{
    return build;
}
string Bounty::getCity() const
{
    return city;
}
string Bounty::getBodyMark() const
{
    return bodyMark;
}

void Bounty::setName(string n)
{
    name = n;
}
void Bounty::setAge(int a)
{
    age = a;
}
void Bounty::setEyeColor(string e)
{
    eyeColor=e;
}
void Bounty::setBuild(string b)
{
    build = b;
}
void Bounty::setCity(string c)
{
    city = c;
}
void Bounty::setBodyMark( string m)
{
    bodyMark=m;
}
void Bounty::printBounty()
{
    bool flag;
    cout << setprecision(2) << fixed;
    cout << "Name: " << name << endl; // print name
    

    //should probably add crime description. -_- and stuff to sort it with
    cout << "Age: " << age<< endl;
    cout << "Eye Color: " << eyeColor << endl;
    cout << "Build: " << build << endl;
    cout << "City: " << city << endl;
    cout << "Body Markings: " << bodyMark << endl;

    cout <<endl <<endl;
}

void Bounty::printBountyToFile(string filename)
{
    ofstream file;
    file.open(filename.c_str(), ios::app);
    if(file)
    {
        file << name << endl;
        file << age << endl;
        file << eyeColor << endl;
        file << build << endl;
        file << city << endl;
        file << bodyMark << endl;
    }
    else
    {
        cout << "\n\n\nError loading file, Bounty could not be printed. Try another file.\n\n\n";
    }

}

*/