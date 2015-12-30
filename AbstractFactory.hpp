//
//  AbstractFactory.hpp
//  dPattern
//
//  Created by Anand N Ilkal on 30/12/15.
//  Copyright © 2015 Anand N Ilkal. All rights reserved.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

namespace imo {
	class abFactory {
	public:
		abFactory() {}
		virtual ~abFactory(){}
		static abFactory* getObject(int);
	};
	
	class fact1 : public abFactory {
	public:
		fact1();
		virtual ~fact1(){}
	};
	
	class fact2: public abFactory {
	public:
		fact2();
		virtual ~fact2(){}
	};
}

#endif /* AbstractFactory_hpp */
