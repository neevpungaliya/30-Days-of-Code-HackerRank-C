using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge>0){
            this->age=initialAge;
        }
        else {
            this->age=0;
            printf("Age is not valid, setting age to 0. \n");
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if((this->age) >= 13 && (this->age) < 18)
            printf("You are a teenager. \n");
        else if((this->age) < 13)
            printf("You are young. \n");
        else
            printf("You are old. \n");
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        this->age=this->age+1;
    }

int main(){