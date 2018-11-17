#include<iostream>

using namespace std;

class Shape{
	
	public:
	void shapeInfo(int a){
		cout << "Function -> 1 -> " << a << endl;
	}
	
	void shapeInfo(int a,int b){
		cout << "Function -> 2 -> " << a << " " << b << endl;
	}
	
	void shapeInfo(float b, int a){
		cout << "Function -> 3 -> " << a << " " << b << endl;
	}
	
	void shapeInfo(float a, float b){
		cout << "Function -> 4 -> " << a << " " << b <<endl;
	}
	
};



int main(){
	
	Shape s1;
	
	s1.shapeInfo(1.2f,23.3f);
	s1.shapeInfo(5);
	s1.shapeInfo(100,64);
	s1.shapeInfo(350.5f,25);
	
	return 0;
}
