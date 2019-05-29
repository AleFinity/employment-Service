#include "spiski_worker.h"
int spiski_worker::proverka(string login, string parol, int & qw, wor_lk &my_dan_wor)
{
	char probel[150];
	iw_txt.open(sttW, ios::in);
	char FIO[150], stag[10], name_spec[150], shifr[150], org_take[1024];
	iw_txt >> FIO;
	while (iw_txt)
		{			
			iw_txt >> dan_person.login_w;
			iw_txt >> dan_person.parol_w;
			iw_txt.get();
			iw_txt.getline(FIO, 150);
			iw_txt >> stag;
			iw_txt >> shifr;
			iw_txt.get();
			iw_txt.getline(name_spec, 150);
			iw_txt.getline(org_take, 150);
			if (login == dan_person.login_w && parol == dan_person.parol_w)
			{
				qw++;
				my_dan_wor.set(dan_person.login_w, dan_person.parol_w, FIO, stag, shifr, name_spec, org_take);
				iw_txt.close();
				return 1;
			}
			if (login == dan_person.login_w)
			{
				qw++;
			}
		}	
	iw_txt.close();
	return 0;
}

void spiski_worker::vvod_dan_work(string login, string parol, string FIO, string stag, string shifr, string nazvansp)
{
	ow_txt.open(sttW, ios::app);
	ow_txt << endl << login;
	ow_txt << endl << parol;
	ow_txt << endl << FIO;
	ow_txt << endl << stag;
	ow_txt << endl << shifr;
	ow_txt << endl << nazvansp;
	ow_txt << endl << '|';
	ow_txt.close();
}

void spiski_worker::take_person(string login, string org)
{
	int i = 0;
	iw_txt.open(sttW, ios::in);
	ofstream copy("copy.txt", ios::out | ios::trunc);
	char FIO[150], nazvan_sp[150], takeOrg[1024],per[10];
	iw_txt >> FIO;
	copy << FIO;
	while (!iw_txt.eof())
	{
		iw_txt >> dan_person.login_w;
		iw_txt >> dan_person.parol_w;
		iw_txt.get();
		iw_txt.getline(FIO, 150);
		iw_txt >> dan_person.stag;
		iw_txt >> dan_person.shifr_spec;
		iw_txt.get();
		iw_txt.getline(nazvan_sp, 1024);
		iw_txt.getline(takeOrg, 1024);

		copy << endl<< dan_person.login_w;
		copy << endl << dan_person.parol_w;
		copy << endl << FIO;
		copy << endl << dan_person.stag;
		copy << endl << dan_person.shifr_spec;
		copy << endl << nazvan_sp ;		
		if (login == dan_person.login_w)
		{
			copy << endl << takeOrg + org + '|';
		}
		else
			copy << endl << takeOrg;
	}
	copy.close();
	iw_txt.close();
	remove(sttW);
	rename("copy.txt", sttW);
}
