//
//  AbstractFactory.cpp
//  dPattern
//
//  Created by Anand N Ilkal on 30/12/15.
//  Copyright © 2015 Anand N Ilkal. All rights reserved.
//

#include "AbstractFactory.hpp"


namespace imo {

	abFactory* abFactory::getObject(int in) {
		switch(in){
			case 1:
				return new fact1;
				break;

			case 2:
				return new fact2;
				break;
				
			default:
				return nullptr;
				break;
		}
	}
	
	fact1::fact1() {
		std::cout << "this is derived class fact1" << std::endl;
	}

	fact2::fact2(){
		std::cout << "this is derived class fact2 "<< std::endl;
	}
}