#ifndef STDAFX
#define STDAFX

#include "stdafx.h"

#endif

sfEvent event;

int _tmain(int argc, _TCHAR* argv[])
{ 
	//Declaration Var, Tab ect...

	sfRenderWindow* gameWindow = 0;

	sfVideoMode screenOption = { 1280, 720, 32 };

	sfTexture* gameTexture[46];

	sfSprite* gameSprite[12 * 12];

	sfSprite* charSprite[20];

	sfVector2i mousePos;

	float positionCharX;

	float positionCharY;

	char str[30];

	char BackgroundMapper[12 * 12] = {
		1,21,21,1,1,1,11,11,11,11,11,11,
		1,1,1,2,1,1,11,11,15,11,11,21,
		1,1,1,1,1,1,11,12,11,11,11,21,
		1,1,2,21,21,1,11,21,21,11,11,11,
		1,1,4,21,3,1,11,13,21,11,12,11,
		1,1,1,1,1,1,11,11,11,11,11,11,
		6,6,6,6,6,6,16,16,16,16,16,16,
		6,7,6,21,8,6,16,18,21,16,16,16,
		6,10,6,21,21,6,16,21,21,16,17,16,
		21,6,6,6,6,6,16,16,19,16,16,16,
		21,6,7,6,6,6,16,17,16,16,16,16,
		6,6,6,6,6,6,16,16,16,21,21,16
	};
	
	gameWindow = sfRenderWindow_create(screenOption, "Jeu mon gars !", sfResize | sfClose, NULL);

	SetTexture(str, gameTexture, FOLDER_IMG);

	SetMapTile(BackgroundMapper, gameTexture, gameSprite, charSprite);

	//MainLoop
	while (sfRenderWindow_isOpen(gameWindow))
	{
		CheckEvent(gameWindow, event);

		ClearWindow(gameWindow);
			
		DrawMapTile(gameWindow, gameSprite, charSprite);

		UpdateScreen(gameWindow);
	} 
	return 0; 
}
