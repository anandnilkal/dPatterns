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
}