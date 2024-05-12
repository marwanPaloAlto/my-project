#pragma once
#include "Person.h"
class Student :
    public Person
{
private:                         // LOCAL ATTRIBUTES :
    int level;
    float GPA;
    string depart;

public:                                                                     // Reusability
    Student(string n, string g, float a, int l, float gp, string d) :Person(n, g, a)
        // Fist three attributes are in base class;      
    {                                                  // To initialize these three attributes,      
        level = l;                                     // I have to call the base class constructor 
        GPA = gp;                                      //And his function is to intitialize them. 
        depart = d;                                    // »⁄œ ﬂœÂ ÂŸ»ÿ «··Ì ›Ì «·Êﬂ«· Â‰«
    }
    void set_level(int l)
    {
        level = l;
    }
    void set_GPA(float g)
    {
        GPA = g;
    }
    void set_depart(string d)
    {
        depart = d;
    }
    string get_depart()
    {
        return depart;
    }
    int get_level()
    {
        return level;
    }
    float get_GPA()
    {
        return GPA;
    }

    void display()
    {
        Person::display();
        cout << "Depart" << depart << " ,Level = " << level << " ,GPA= " << GPA << endl;
    }

};

