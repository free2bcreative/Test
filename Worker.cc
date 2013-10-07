#include "Worker.h"

Worker::Worker(string name, callback_function function){
	name_ = name;
	setWorkerFunction(function);
}

Worker::~Worker(){

}

string
Worker::getName(){
	return name_;
}

string
Worker::getNameUsingFunction(){
	return function_();
}

void
Worker::setWorkerFunction(callback_function function){
	function_ = function;
}

