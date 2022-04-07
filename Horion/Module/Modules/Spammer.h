#pragma once
#include "Module.h"

class Spammer : public IModule {
private:
	int Odelay = 0;
	bool bypass = true;
	int delay = 2;
	int length = 8;
	std::string message = "I love Kolds Sister";
	std::string message2 = "UR ABT TO GET SWATTED ROFLSAUCE";
	std::string message3 = "LoL NICE LOG SHITTTER";
	std::string message4 = "Keep crying :yawn:";
	std::string message5 = "winning all day";
	std::string message6 = "I WILL STOMP YOUR MUDHUT RETARDD";
	std::string message7 = "HAHAHAHAHA I AM THE KING OF THIS SERVER";
	std::string message8 = "KYS TRANNNY NICE IQ UNKNOWN KEKEKEK";
	std::string message9 = "YOU ARE SO BAD LOLOLOL";
	std::string message10 = "YOU'RE MY BITCH";
	std::string message11= "LOOLLOLLLO EZZ MAD SHITBOX";
	std::string message12= "EQUINEHACK IS THE BEST CLEINT HAHAHAHAA NICE IQ POORON";
	std::string customMessage = "I remember when i wasnt the best.... jk";
	std::string customMessage2 = "BAD BAD BAD BAD BAD";
	std::string customMessagee3 = "<--- KING OF EQUINEHACK";
	std::string customMessage4 = "YOU ARE RUNNING MY RAT RN ROFLCOPTER";
	std::string customMessage5 = "LOL EQUINEHACKLESS";
	std::string customMessage6 = "WRITE YOUR WILL LOLOL, SWAT COMING? ue lol Uwu";
	std::string customMessage7 = "EASIEST WIN OF MY LIFE ROFL";
	std::string customMessage8 = "IM THE BEST WDYM";
	std::string customMessage9 = "UNKNOWN NEWNAME ROFLMONSTER KEKEKEK";
	std::string customMessage10 = "SIT DOWN DOGGY NN";
	std::string customMessage11 = "IMAGINE TAKING L's, COULDNT BE ME LMAOOO";
	std::string customMessage12 = "LOL GO 0,0 OR DODGE??? PREPARE FOR SWAT KEKEKEK";

public:
	Spammer();
	~Spammer();

	inline std::string& getMessage() { return message; };
	inline int& getDelay() { return delay; };
	inline int& getLength() { return length; };
	inline bool& getBypass() { return bypass; };

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};
