#ifndef HomoSapience_h
#define HomoSapience_h

enum Religion {
	Christianity,Islam
};

enum Nationality{
	Armenian, Greek, Russian, American
};

class HomoSapience : Human {
private: 
	Nationality _nationality;
	Religion _religion;
public:
	void Work() override;

	Religion getReligion();
	void setReligion(Religion);
	Nationality  getNationality();
	void setNationality(Nationality);

};

void  Think();

#endif
