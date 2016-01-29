//
//  string.cpp
//  dPatterns
//
//  Created by Anand N Ilkal on 26/01/16.
//  Copyright © 2016 Anand N Ilkal. All rights reserved.
//

#include "mystring.hpp"

using namespace std;

namespace imo {
	string::string() {
		buf = nullptr;
		buflen = 0;
	}
	
	string::string(char* in) {
		buflen = strlen(in);
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in, buflen);
		buf[buflen] = '\0';
	}
	
	string::string(uint32_t len) {
		if(len) {
			buflen = len;
			buf = reinterpret_cast<char*>(std::malloc(len + 1));
			std::memset(buf, 0, len+1);
		}
	}
	
	string::string(const char* in) {
		buflen = strlen(in);
		buf = reinterpret_cast<char*>(std::malloc(buflen+1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in, buflen);
		buf[buflen] = '\0';
	}
	
	string::string(const string& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	inline size_t string::length() const {
		return buflen;
	}
	
	inline char* string::getbuf() const {
		return buf;
	}
	
	void string::assign(char* in) {
		if(buflen < strlen(in)) {
			throw imo_exception();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void string::assign(const char* in) {
		if(buflen < strlen(in)) {
			throw imo_exception();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void string::operator=(string& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	void string::operator=(const string& in){
		buflen = in.length();
		buf = reinterpret_cast<char*>(std::malloc(buflen + 1));
		std::memset(buf, 0, buflen+1);
		strncpy(buf, in.getbuf(), buflen);
		buf[buflen] = '\0';
	}
	
	void string::operator=(char *in){
		if(buflen < strlen(in)) {
			throw imo_exception();
		}
		strncpy(buf, in, strlen(in));
	}
	
	void string::operator=(const char *in){
		if(buflen < strlen(in)) {
			throw imo_exception();
		}
		strncpy(buf, in, strlen(in));
	}
	
	char* string::operator()() {
		if(buflen) {
			return buf;
		} else {
			return nullptr;
		}
	}
}