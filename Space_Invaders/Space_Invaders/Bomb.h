#include "Laser.h"

class Bomb : public Laser{

private:


public:
	// Attributs
	bool isExploding;
	int explosionStep;

	// Constructeur
	Bomb();

	// M�thodes
	void moveBomb();

	void explosion();

};