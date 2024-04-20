//Encapsulation - we do encapsulation in order to prevent anyone or anything outside of our class to be able to directly access our data and to interact with it and modify it.
// to access private properties of a class we use getters and setters associated to each property.
#include <iostream>

using std :: string;

class AbstractEmployee{
	virtual void AskForPromotion() = 0; // to make this function obligatory we have to declare it as Virtual ; this line here means, to any class for signing this contract has to provide the implementation of AskForPromotion.
};

class Employee: AbstractEmployee  {
	protected:
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
//inheritance is private by default.
class Developer:public Employee {
	public:
		string FavProLang;
		
		Developer(string name, string company, int age, string lang) : Employee(name, company, age){
			FavProLang=lang;
		}
		
	void FixBug(){
		// std :: cout << getName() << " fixed bug using " << FavProLang << std :: endl;
        // as private properties of Employee class are now protected.
		std :: cout << Name << 	" fixed bug using " << FavProLang << std :: endl;
	}	
};

class Teacher :public Employee {
	public:
		string Subject;
		
			Teacher(string name, string company, int age, string subject) : Employee(name, company, age) {
			Subject = subject;
		}

		
		void PrepareLesson(){
			std :: cout << getName() << " is prepairing " << Subject << " lesson" << std :: endl;
		}
		
	};


int main() {
	Developer d = Developer("Rhodan", "Hell", 100,"CPP");
	d.FixBug();
	
	Teacher t = Teacher("WW", "ElementarySchool", 50, "Chemistry");
	t.PrepareLesson();
	t.AskForPromotion();
}