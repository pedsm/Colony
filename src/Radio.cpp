/*
 * Radio.cpp
 *
 *  Created on: Oct 15, 2016
 *      Author: nichita
 */

#include "Radio.h"
#include "Constants.h"
#include <sstream>
#include <string>
using namespace std;

Radio::Radio() : Project(RADIO){
	//using Project::Project;
	//Project p(RADIO);
	//super(RADIO);
	//using Project::Project(RADIO);

}

Radio* Radio::r;

Radio::~Radio() {
	//important destructor
}


void Radio::reset(){
	delete Radio::r;
	giveRadio();
}

Radio* Radio::giveRadio(){
	if(r==0){
		r=new Radio();
	}
	return r;
}


string Radio::toString(){
	ostringstream os;
	os << r->name;
	if(r->isFinished()){
		os << " repair finished.";
	}else{
		os << " repair in progress.";
	}
	return os.str();
}
