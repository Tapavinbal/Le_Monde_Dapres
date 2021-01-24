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
		std::size_t getId() const {return id_cuisinier;}
		void sePresenter();
	private:
		std::size_t id_cuisinier;
};
