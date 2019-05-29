#pragma once
#include <string>
#include <iostream>
using namespace std;
class wor_lk 
{
private:
	string my_login_w, my_parol_w;
	string my_FIO;
	string my_stag;
	string my_shifr_spec;
	string my_nazvanie_spec;
	string my_name_take_org;

public:
	wor_lk() {};
	void set(string login_w, string parol, string FIO, string stag, string shifr, string name_spec, string my_name_take_org);
	string get_my_FIO() { return my_FIO; };
	string get_my_stag() { return my_stag; };
	string get_my_shifr_spec() { return my_shifr_spec; };
	string get_my_nazvanie_spec() { return my_nazvanie_spec; };
	string get_my_name_take_org() { return my_name_take_org; };
	~wor_lk() {};
};