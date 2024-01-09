#pragma once
#include "Environment.h"

class LifeGame : public Environment {
public:
	LifeGame(int width, int height, std::shared_ptr<class Texture> texture) :
		Environment{ width, height, texture } {}

	bool Initialize() override;
	void Step() override;
	void KeyDown(SDL_Keycode keycode) override;

	int frame{ 0 };
	std::vector<uint8_t> bufferA;
	std::vector<uint8_t> bufferB;


};