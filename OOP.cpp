#include<iostream>
#include<cstring>

using namespace std;

class Person{
	
	int age;
	char name[100];
	
	public:
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
	
};

int main(){
	
	Teacher t1("Lecturer",28,"Arif");
	
	t1.printTeacher();
	
	return 0;
}
