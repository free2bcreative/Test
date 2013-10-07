#include <string>
#include <iostream>

using namespace std;

typedef string (*callback_function)(void);

class Worker{
	public:
		Worker(string, callback_function);
		~Worker();

		string getName();
		string getNameUsingFunction();

	private:
		
		void setWorkerFunction(callback_function);

		string name_;
		callback_function function_;
};