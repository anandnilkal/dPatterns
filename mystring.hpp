//
//  mystring.hpp
//  dPatterns
//
//  Created by Anand N Ilkal on 26/01/16.
//  Copyright © 2016 Anand N Ilkal. All rights reserved.
//

#ifndef mystring_hpp
#define mystring_hpp

#include <stdio.h>
#include <iostream>
#include <stdint.h>
#include <exception>

namespace imo {
	
	class imo_exception: public std::exception {
		public:
		char* what() const throw() {
			return "imo exeption";
		}
	};
	
	class string {
		public:
			string();
			string(char*);
			string(uint32_t);
			string(const char*);
			string(const string&);
	
			void assign(char*);
			void assign(const char*);
	
			void operator=(char*);
			void operator=(const char*);
	
			void operator=(string&);
			void operator=(const string&);
			char* operator()();

			size_t length() const;
			char* getbuf() const;
	
		private:
			char	*buf;
			size_t	buflen;
	};
}

#endif /* mystring_hpp */
