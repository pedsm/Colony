/*
 * Colony.h
 *
 *  Created on: 8 Oct 2016
 *      Author: zaxa1
 */

#ifndef COLONY_H_INCLUDED
#define COLONY_H_INCLUDED

class Colony {
	int day;
	int rations, medicine, uncooked, weapons, barricade;
	int people, sick;
public:
	Colony();
	Colony(int r,int m, int u, int w, int d, int p, int s=0, int b=0);
	virtual ~Colony();
	int getPeople();
	int getSick();
	int getRat();
	int getMed();
	int getWep();
	int getUnc();
	int getDay();
	void incDay();
	void setPeople(int );
	void setSick(int );
	void setRat(int );
	void setMed(int );
	void setWep(int );
	void setUnc(int );
	int getBar();
	void setBar(int b);
	void operator+=(Colony*);
};

#endif /* COLONY_H_ */
