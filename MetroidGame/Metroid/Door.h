#pragma once
#include"GameplayObject.h"
class Door:public GameplayObject
{
public:
	void Init();
	void Update(float time);
	void Draw(float time);
	void OnCollision(GameplayObject* obj, int nx, int ny);
	Door();
	~Door();
};

