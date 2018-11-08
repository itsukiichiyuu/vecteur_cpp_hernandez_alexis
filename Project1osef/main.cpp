#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include "cVect2d.h"

int main() {

	//Declaration de 3 vecteurs (constructeurs)
	cVect2d cVectMonVect(0.0f,0.0f);
	cVect2d cVectMonVect2(0.0f);
	cVect2d cVectMonVect3();	

	//mutateur
	cVectMonVect.setVectEnX(3.2f);
	cVectMonVect.setVectEnY(4.5f);

	cVectMonVect2.setVectEnX(1.3f);
	cVectMonVect2.setVectEnY(5.2f);


	//assesseurs
	std::cout << "X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//somme
	cVectMonVect.sommeVect(cVectMonVect2);
	std::cout << "addition X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//soustraction
	cVectMonVect.sousVect(cVectMonVect2);
	std::cout << "soustraction X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//multiplication avec un Reel
	cVectMonVect.multiReel(2.0f);
	std::cout << "multiplication par un reel X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//multiplication de deux vecteurs
	cVectMonVect.multiVect(cVectMonVect2);
	std::cout << "multiplication de deux vecteurs X =" << cVectMonVect.getVectEnX() << " ,Y =" << cVectMonVect.getVectEnY() << std::endl;

	//norme d'un vecteur
	std::cout << cVectMonVect.normeVect(cVectMonVect2) << std::endl;

	system("pause");

	return 0;

}