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
        if (initialAge >= 0) {
            age = initialAge;
        } else {
            age = 0;
            std::cout << "Age is not valid, setting age to 0.\n";
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (age < 13)
            std::cout << "You are young.\n";
        else if (age < 18)
            std::cout << "You are a teenager.\n";
        else
            std::cout << "You are old.\n";
    }

    void Person::yearPasses(){
        ++age;
    }

int main(){
    int t;
	int age;
    std::cin >> t;
    for(int i=0; i < t; i++) {
    	std::cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		std::cout << '\n';
    }

    return 0;
}