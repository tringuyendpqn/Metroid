﻿#ifndef CAMERA_H
#define CAMERA_H

#include <DirectXMath.h>
#include"GraphicsDevice.h"
#include"GameplayObject.h"
#include"MetroidChacracter.h"
#include"Node.h"
#include"Colision.h"
#include<iostream>
#include<vector>
#include<D3dx9math.h>
using namespace std;


class Camera: public GameplayObject
{
public:
	bool vCam;// bien cho phep di chuyen ca me ra theo chieu doc
	D3DXMATRIX mt;
public:
	Camera();
	static Camera* getInstance();
	void Update(float time);
	void Draw(float time);
	void OnCollision(GameplayObject* o,float nx,float ny);
	vector<GameplayObject*> listObjectOnCamera;
	vector<GameplayObject*> listBulletOnCamera;
	void AddObject(GameplayObject* o);
	void UpdateObject(float time);
	D3DXMATRIX getMatrix();
private:
	static Camera* instance;
};

#endif /* CAMERA_H */
