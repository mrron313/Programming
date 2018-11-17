#include<iostream>
#include<string>

using namespace std;

class A{
	
	int age;
	string name;
	int abc;
	
	public:
		static int val;
		A(){
			val++;
		}
		
		A(int age, string str){
			this->age = age;
			name = str;
			val++;
		}
		
		A(int age){
			this->age = age;
			val++;
		}
		
		A(string str){
			name = str;
			val++;
		}
		
		int getAge(){
			return age;
		}
		
		string getName(){
			return name;
		}
		
		char update(int age){
			this->age = age;
			return 'c';
		}
		
		int update(int age, int k){
			this->age = age;
			abc=k;
			return 1;
		}
		
};

int A::val=0;

int main(){
	
	A obj1(10,"Ahad");
	
	A *p = &obj1;
	
	cout << p->getName();
	cout << p->getAge();
	
	A obj2(20);
	
	A obj3("arif");
	
	cout << obj2.getAge();
	
	cout << obj3.getName();
	
	cout << "Total : " << A::val;
	
	obj2.update(600);
	cout << endl << obj2.getAge();
	
	obj3.update(700,1);
	
	cout << obj3.getAge();
	cout << obj3.getName();
	
	return 0;
}
