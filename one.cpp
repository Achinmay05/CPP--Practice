#include <iostream>
using std :: string;

class Employee {
	private :
		
		string Name;
		string Company;
		int Age;
		
	public:
		

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

};


int main() {
	Employee emp1("Ghidorah", "Hell", 100);
//	 emp1.Name = "Ghidorah";
//	 emp1.Company = "Hell";
//	 emp1.Age = 100;
	emp1.Introduce();

	Employee emp2("Godzilla", "World", 100);
//	 emp2.Name = "Godzilla";
//	 emp2.Company = "World";
//	 emp2.Age = 100;
	emp2.Introduce();
	
	Employee emp3("monsterzero", "Hell", 100);
//	 emp1.Name = "Ghidorah";
//	 emp1.Company = "Hell";
//	 emp1.Age = 100;
	emp3.Introduce();
}