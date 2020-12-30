// Let Catch provide main():

//////////////WARNING////////////////:
/*Utilisant la classe Molecule dans des fonctions de la classe Reaction
  On enleve "#include "molecule.hh"" pour ne pas surcharger la classe lors de la compilation
  */
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
//#include "molecule.hh"
#include <iostream>
#include <fstream>
#include <list>
#include "reaction.hh"
using namespace std;


TEST_CASE("1: Molecules read","[molecules]"){
  Molecule m("H-O-H");
  REQUIRE(m.nbAtom() == 3);
  REQUIRE(m.mole()[0] == "H");
  REQUIRE(m.mole()[1] == "O");
  REQUIRE(m.mole()[2] == "H");
}

TEST_CASE("2: Molecules Normalize","[molecules]"){
  Molecule m("H-O-H");
  std::cout << m.normalize() << std::endl;
  REQUIRE(m.normalize() == "H2O");

}

TEST_CASE("3: le fichier","[molecules]" )
{
  ifstream file("molecules.txt");
  list<Molecule> les_molecules;
  string s;
  while( file >> s)
    {
      les_molecules.push_back(Molecule(s));
    }
  ifstream res("res_normalize.txt");
  for(const auto& iter : les_molecules)
    {
      res >> s;
      cout << iter.normalize() << std::endl;
      REQUIRE(s==iter.normalize());
    }
  res.close();
  file.close();

}
TEST_CASE("4: Reactions","Reaction"){
  ifstream file("reactions.txt");
  list<Reaction> lesReactions;
  string s;
  ifstream res("res_reaction.txt");
  while(getline(file,s))
    {
      if(!s.empty())
        lesReactions.push_back(Reaction(s));
    }
  for(const  auto& iter : lesReactions)
    {
      getline(res,s);
      cout << iter.normalize() << endl;
      REQUIRE(s==iter.normalize());
    }
  res.close();
  file.close();
}
