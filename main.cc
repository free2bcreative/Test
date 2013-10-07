#include <iostream>
#include <string>
#include "Worker.h"

using namespace std;

string getOtherName();

int main(){
	Worker worker1("Mike", &getOtherName);
	cout << "Worker1.getName(): " << worker1.getName() << endl;
	cout << "Worker1.getOtherName(): " << worker1.getNameUsingFunction() << endl;


}

string getOtherName(){
	return "Rachel is amazing!";
}