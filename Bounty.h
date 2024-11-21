#ifndef BOUNTY_H
#define BOUNTY_H

#include <iostream>
#include <string>

using namespace std;

class Bounty {
private:
    string name;      // Name of the suspect
    int age;          // Age of the suspect
    string eyeColor;  // Eye color of the suspect
    string build;     // Build of the suspect
    string city;      // City of the suspect
    string bodyMark;  // any mark on the body of the suspect

public:
    // Constructor
    
    Bounty(const string& name, int age, const string& eyeColor, 
            const string& build, const string& bodyMark, const string& city);

    // Destructor
    ~Bounty();

    // Accessor methods
    string getName() const;
    int getAge() const;
    string getEyeColor() const;
    string getBuild() const;
    string getBodyMark() const;
    string getCity()const;

    // Comparison operators
    bool operator<(const Bounty& other) const; // Compare by name
    bool operator>(const Bounty& other) const; // Compare for equality
    bool operator==(const Bounty& other) const; // Compare for equality by name
    // Friend function for outputting the bounty information
    friend ostream& operator<<(ostream& os, const Bounty& bounty);
};

#endif // BOUNTY_H






/*

#ifndef BOUNTY_H
#define BOUNTY_H

#include <iostream>
#include <fstream>

using namespace std;

class Bounty
{
    private:
        string name;
        int age;
        string eyeColor;
        string build;
        string city; 
        string bodyMark;
        
        //these last two are what we could sort them by
        float bountyNum;
        int wantedLvl;

    public:
        Bounty();
        Bounty(string, int, string, string, string, string);
        string getName() const;
        int getAge() const;
        string getEyeColor() const;
        string getBuild() const;
        string getCity() const;
        string getBodyMark() const;
        void setName(string) ;
        void setAge(int) ;
        void setEyeColor(string) ;
        void setBuild(string) ;
        void setCity(string) ;
        void setBodyMark(string) ;
        void printBounty();
        void printBountyToFile(string); 





};
#endif   */