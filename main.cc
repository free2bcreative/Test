#include <iostream>
#include <string>
#include <queue>
#include "Worker.h"

using namespace std;

string getOtherName();

int main(){
	Worker worker1("Mike", &getOtherName);
	cout << "Worker1.getName(): " << worker1.getName() << endl;
	cout << "Worker1.getOtherName(): " << worker1.getNameUsingFunction() << endl;

	queue<int> clients;

	clients.push(0);
	clients.push(1);
	clients.push(2);

	cout << clients.front() << endl;
	clients.pop();
	cout << clients.front() << endl;
	clients.pop();
	cout << clients.front() << endl;
	clients.pop();

}

string getOtherName(){
	return "Rachel is amazing!";
}