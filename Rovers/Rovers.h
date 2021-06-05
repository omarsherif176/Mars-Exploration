#pragma once

// contains 3 lists :one for m , p , e


class Rovers
{
protected:
	int speed; //in km/hr
	int checkUpDur; //in days and it's the time needed for the rover to be checked 
	int NeedCheckUP; // after how many missions I need to complete to make a checkup
	int  MissionComp; //number of missions completed by the rover, we need it to know it for checkup
	
public:
	 Rovers(int spd, int Checkupdur, int Ncheckup, int Mcomp);
	 void setSpeed(int a);
	 void setCheckUpDur(int a);
	 void setMissionComp(int a);
	 void setNeedCheckUp (int a);
	 int getMissionComp();
	 int getNeedCheckUp();
	 int getCheckUpDur();
	 int getSpeed();
	 ~Rovers();
};
