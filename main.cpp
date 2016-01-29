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
	
	imo::string one("hello");
	imo::string two(10);
	two.assign("anand");
	std::cout << one.getbuf() << " " << two.getbuf() << std::endl;
	imo::string three(10);
	three = "hello";
	
	imo::string four(10);
	four.assign("anand");
	
	std::cout << three.getbuf() << " " << four.getbuf() << std::endl;
	imo::string five(1);
	try {
		five.assign("hello");
	} catch (imo::imo_exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	imo::string six("hello aniketh");
	std::cout << six() << std::endl;
}