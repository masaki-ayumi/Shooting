#pragma once
#include "../Library/gameObject.h"
/// <summary>
/// ワールド座標軸のくらす
/// </summary>
class Axis :public GameObject
{
public:
	Axis(SceneBase* scene) :GameObject(scene){}
	~Axis(){}
	void Draw() override;

};