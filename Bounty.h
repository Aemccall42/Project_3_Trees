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
#endif