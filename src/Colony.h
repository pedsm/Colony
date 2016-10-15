#include <vector>
#include "Project.h"
#include "Constants.h"

#ifndef COLONY_H_INCLUDED
#define COLONY_H_INCLUDED

class Colony {
	int day;
	int rations, medicine, uncooked, weapons, barricade, scrap;
	int people, sick;
	int cookBots, turrets;
//	int radioProgress;
//	bool radioWorking;
	std::vector<Project*> *projects;

public:
	Colony(int r=INITIAL_FOOD, int m=INITIAL_MEDICINE, int u=INITIAL_UNCOOKED, int w=INITIAL_WEAPONS, int p=INITIAL_PEOPLE, int sc=INITIAL_SCRAP, int c=0, int t=0, int d=1, int si=INITIAL_SICK, int b=INITIAL_BARRICADES);
	virtual ~Colony();
	int getPeople();
	int getSick();
	int getRat();
	int getMed();
	int getWep();
	int getUnc();
	int getDay();
	int getBar();
	int getScr();
	int getCookB();
	int getTur();
	int getNoPr();
	void build(int type);
	void incDay();
	void setPeople(int);
	void setSick(int);
	void setRat(int);
	void setMed(int);
	void setWep(int);
	void setUnc(int);
	void setBar(int);
	void setScr(int);
	void setCookB(int);
	void setTur(int);
	void operator+=(Colony*);
};

#endif /* COLONY_H_ */
