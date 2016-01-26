//
//  main.cpp
//  dPattern
//
//  Created by Anand N Ilkal on 30/12/15.
//  Copyright © 2015 Anand N Ilkal. All rights reserved.
//

#include "main.hpp"
#include <typeinfo>

using namespace imo;

int main(int argc, char** argv){
	imo::abFactory *object = abFactory::getObject(2);
	
	std::cout << "typeinfo [%s] " << typeid(object).name() << std::endl;
	if(!nullptr) {
		delete object;
	}
	
	mystring one("hello");
	mystring two(10);
	two.assign("anand");
	std::cout << one.getbuf() << " " << two.getbuf() << std::endl;
	mystring three(10);
	three = "hello";
	
	mystring four(10);
	four.assign("anand");
	
	std::cout << three.getbuf() << " " << four.getbuf() << std::endl;
	mystring five(1);
	try {
		five.assign("hello");
	} catch (imo::imo_exception& e) {
		std::cout << e.what() << std::endl;
	}
}