#include<iostream>
#include<cstring>

using namespace std;

class Person{
	
	int age;
	char name[100];
	
	public:
		
		Person(){
			cout << "Parent class"<< endl;
		}
		
		Person(int a, char n[]){
			strcpy(name,n);
			age=a;
		}
		
		char* getName(){
			return name;
		} 
		
		int getAge(){
			return age;
		}
		
		void printInfo(){
			cout << "Person print info" << endl;
		}
};

class Teacher: public Person{
	
	char position[100];
	
	public:
		Teacher(char pos[], int a, char n[]) : Person(a,n){
			strcpy(position,pos);
		}
		
		void printTeacher(){
			cout << "Name :" << Person::getName() << endl ;
			cout << "Age :" << Person::getAge() << endl;
			cout << "Position :" ; puts(position) ;
		}
	
};

class Student: public Person{
	
	char year[100];
	
	public:
		Student(){
			cout << "Student class.." << endl;
		}
		
		void printInfo(){
			cout << "Student print info" << endl;
		}
	
};

int main(){
	
	Teacher t1("Lecturer",28,"Arif");
	
	Student st1;
	
	st1.printInfo();
	
	t1.printTeacher();
	
	return 0;
}
