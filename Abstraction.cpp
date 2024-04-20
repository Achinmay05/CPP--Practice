//Abstraction means hiding complex things behind a procedure to make those things look simple.
#include <iostream>
using std :: string;


class AbstractEmployee{
	virtual void AskForPromotion() = 0; // to make this function obligatory we have to declare it as Virtual ; this line here means, to any class for signing this contract has to provide the implementation of AskForPromotion.
};


class Employee : AbstractEmployee {
	private :
		string Name;
		string Company;
		int Age;

	public :
//		//to set Name we will create setter for Name property.
		void setName(string name){
			Name = name;
		}
//		
//		//to get Name we will create setter for Name property.
        string getName(){
        	return Name;
		}
		
		//as these 2 methods are public anyone outside of the class can be able to invoke setName and getName.
		
		//to set Company we will create setter for Company property.
		void setCompany(string company){
			Company = company;
		}
		
		//to get Company we will create setter for Company property.
        string getCompany(){
        	return Company;
		}
		
		//to set Age we will create setter for Age property.
        // Now, as these methods are the only way to change the attributes(properties) we can add checkpoints or validation criteria to change anyone of these properties.
		void setAge(int age){
			if(age >= 18)
			Age = age;
			else
				std :: cout << "Underaged ! ";
		}
		
		//to get Age we will create setter for Age property.
		int getAge(){
        	return Age;
		}
		
		void Introduce() {
			std :: cout << "Name - " << Name << std :: endl;
			std :: cout << "Company - " << Company << std :: endl;
			std :: cout << "Age - " << Age << std :: endl;
			std :: cout << std :: endl;
		}

		Employee(string name, string company, int age) {
			Name = name ;
			Company = company ;
			Age = age ;

		}
		
		void AskForPromotion(){
			if(Age > 30)
			std :: cout << Name << " is Promoted !" << std :: endl;
			
			else
			std :: cout << Name << " is Not Promoted !" << std :: endl;
		}

};


int main() {
	Employee emp1("Ghidorah", "Hell", 100);
    Employee emp2("Godzilla", "Earth", 20);
    emp1.AskForPromotion();
    emp2.AskForPromotion();
	
	
}