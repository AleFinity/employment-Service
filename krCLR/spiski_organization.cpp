#include "spiski_organization.h"
int spiski_organization::proverka(string login, string parol,int &qo, org_lk &my_dan_org)
{			
	iorg_txt.open(sttO, ios::in);
	char name[150], perepodgotovka[150];
	iorg_txt >> name;
	while (iorg_txt)
	{
		iorg_txt >> dan_org.login_org;
		iorg_txt >> dan_org.parol_org;
		iorg_txt.get();
		iorg_txt.getline(name, 150);
		iorg_txt.getline(perepodgotovka, 150);
		if (parol == dan_org.parol_org && login == dan_org.login_org)
		{
			qo++;
			my_dan_org.set(dan_org.login_org, dan_org.parol_org, name, perepodgotovka);
			iorg_txt.close();
			return 1;
		}
		if (login == dan_org.login_org)
		{
			qo++;
		}
	}		
	iorg_txt.close();
	return 0;
}

void spiski_organization::set_perepodgotovka(string perepodgotovka, string login)
{
	int i = 0; 
	iorg_txt.open(sttO, ios::in);
	ofstream copy("copy.txt", ios::out|ios::trunc);
	char name[150], perepodg[1024];
	iorg_txt >> name;
	copy << name;
	while (!iorg_txt.eof())
	{		
		iorg_txt >> dan_org.login_org;		
		iorg_txt >> dan_org.parol_org;		
		iorg_txt.get();
		iorg_txt.getline(name, 150);				
		iorg_txt.getline(perepodg, 1024);	

		copy << endl<< dan_org.login_org;
		copy << endl << dan_org.parol_org;
		copy << endl << name;
		if (login == dan_org.login_org)
		{
			copy << endl << perepodg +  perepodgotovka + '|';
		}	
		else
			copy << endl << perepodg;
	}
	copy.close();
	iorg_txt.close();
	remove(sttO);
	rename("copy.txt", sttO);
}

void spiski_organization::vvod_dan_org(string login, string parol, string nazvanie)
{
	oorg_txt.open(sttO, ios::app);
	oorg_txt << endl << login;
	oorg_txt << endl << parol;
	oorg_txt << endl << nazvanie;
	oorg_txt << endl << '|';
	oorg_txt.close();
}
