#include "aim.h"
#include "config.h"

Aim::Aim(SceneBase * scene)
{
	aimGraph = LoadGraph("data\\graph\\aim.png");
	//マウスの位置を画面中央に固定
	SetMousePoint(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
}

Aim::~Aim()
{
	DeleteGraph(aimGraph);
}

void Aim::Update()
{
	GetMousePoint(&mouseX, &mouseY);
	graphX = mouseX - GRAPH_HALF;
	graphY = mouseY - GRAPH_HALF;
}

void Aim::Draw()
{
	DrawGraph(graphX, graphY, aimGraph, true);
}
