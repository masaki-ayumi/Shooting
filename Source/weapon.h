#pragma once
#include "../Library/gameObject.h"

class Weapon :public GameObject
{
public:
	Weapon(SceneBase*scene);
	~Weapon();
	void Update();
	void Draw();
	void SetPlayerPosition(VECTOR _position);//自機の座標を入れる
	VECTOR position;
private:
	bool isShot = false;//自機が弾を撃ったらtrue
	int hModel;
	VECTOR rotation;
	VECTOR velocity;
};