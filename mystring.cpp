//
//  mystring.cpp
//  dPatterns
//
//  Created by Anand N Ilkal on 26/01/16.
//  Copyright © 2016 Anand N Ilkal. All rights reserved.
//

#include "mystring.hpp"

using namespace std;

namespace imo {
	
	mystring::mystring(char* in) {
		buflen = strlen(in);
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in, buflen);
		buf[buflen] = '\0';
	}
	
	mystring::mystring(uint32_t len) {
		buf = reinterpret_cast<char*>(std::malloc(len + 1));
		std::memset(buf, 0, len+1);
		buflen = len;
	}
	
	mystring::mystring(const char* in) {
		buflen = strlen(in);
		buf = reinterpret_cast<char*>(std::malloc(buflen+1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in, buflen);
		buf[buflen] = '\0';
	}
	
	mystring::mystring(const mystring& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	inline size_t mystring::length() const {
		return buflen;
	}
	
	inline char* mystring::getbuf() const {
		return buf;
	}
	
	void mystring::assign(char* in) {
		if(buflen < strlen(in)) {
			throw bad_alloc();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void mystring::assign(const char* in) {
		if(buflen < strlen(in)) {
			throw bad_alloc();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void mystring::operator=(mystring& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	void mystring::operator=(const mystring& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	void mystring::operator=(char *in){
		if(buflen < strlen(in)) {
			throw bad_alloc();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void mystring::operator=(const char *in){
		if(buflen < strlen(in)) {
			throw bad_alloc();
		}
		strncpy(buf, in, strlen(in));
	}
}