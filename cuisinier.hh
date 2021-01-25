#pragma once
#include<iostream>
#include <string>
#include "personnel.hh"
#include <vector>

class Table;
class Cuisinier : public Personnel{
	public:
		static std::size_t i;
		Cuisinier(std::string n, std::string p, int h);
		~Cuisinier();
		void sePresenter();
	private:
};
