#ifndef STDAFX_
#define STDAFX

#include "stdafx.h"

#endif

void SetTexture(char *str, sfTexture *texture[], char* folder) {
	//Sprite 
	sprintf(str, "%sbiomedesert.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[1] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomedesertarbre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[2] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomedesertbonus.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[3] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomedeserttp1.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[4] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomedeserttp2.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[5] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeglace.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[6] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeglacearbre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[7] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeglacebonus.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[8] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeglacetp1.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[9] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeglacetp2.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[10] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiometerre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[11] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiometerrearbre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[12] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiometerrebonus.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[13] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiometerretp1.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[14] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiometerretp2.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[15] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomefeu.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[16] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomefeuarbre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[17] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomefeubonus.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[18] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomefeutp1.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[19] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomefeutp2.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[20] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeeau.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[21] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeeauarbre.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[22] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeeaubonus.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[23] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeeautp1.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[24] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sbiomeeautp2.jpg", folder); //Recherche de l'image dans le dossier d'image
	texture[25] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scac.png", folder); //Recherche de l'image dans le dossier d'image
	texture[26] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sdistance.png", folder); //Recherche de l'image dans le dossier d'image
	texture[27] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sheal.png", folder); //Recherche de l'image dans le dossier d'image
	texture[28] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%stank.png", folder); //Recherche de l'image dans le dossier d'image
	texture[29] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scote droit1.png", folder); //Recherche de l'image dans le dossier d'image
	texture[30] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scotedroit2.png", folder); //Recherche de l'image dans le dossier d'image
	texture[31] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scotedroit3.png", folder); //Recherche de l'image dans le dossier d'image
	texture[32] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scotegauche1.png", folder); //Recherche de l'image dans le dossier d'image
	texture[33] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scotegauche2.png", folder); //Recherche de l'image dans le dossier d'image
	texture[34] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scotegauche3.png", folder); //Recherche de l'image dans le dossier d'image
	texture[35] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sdos1.png", folder); //Recherche de l'image dans le dossier d'image
	texture[36] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sdos2.png", folder); //Recherche de l'image dans le dossier d'image
	texture[37] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sdos3.png", folder); //Recherche de l'image dans le dossier d'image
	texture[38] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sface1.png", folder); //Recherche de l'image dans le dossier d'image
	texture[39] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sface2.png", folder); //Recherche de l'image dans le dossier d'image
	texture[40] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sface3.png", folder); //Recherche de l'image dans le dossier d'image
	texture[41] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sPersonnageEnCourProfil.png", folder); //Recherche de l'image dans le dossier d'image
	texture[42] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sPersonageEnCourMana.png", folder); //Recherche de l'image dans le dossier d'image
	texture[43] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%sPersonageEnCourVie.png", folder); //Recherche de l'image dans le dossier d'image
	texture[44] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scasedeplacementattaque.png", folder); //Recherche de l'image dans le dossier d'image
	texture[45] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

	sprintf(str, "%scasedeplacementmap.png", folder); //Recherche de l'image dans le dossier d'image
	texture[46] = sfTexture_createFromFile(str, NULL); //Chargement de l'image dans la texture

}

void SetMapTile(char *BG, sfTexture *texture[], sfSprite *sprite[], sfSprite *charSprite[])
{
	for (int y = 0; y < 12; y++) {
		for (int x = 0; x < 12; x++) {
			int temp = (y * 12) + x;
			sprite[temp] = sfSprite_create(); //Instanciation du sprite par SFML (obligatoire)

			switch (BG[temp]) {
			case 1:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 2:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 3:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 4:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 5:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 6:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 7:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 8:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 9:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 10:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 11:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 12:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 13:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 14:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 15:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 16:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 17:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 18:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 19:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 20:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 21:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 22:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 23:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 24:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			case 25:
				sfSprite_setTexture(sprite[temp], texture[BG[temp]], sfTrue);
				break;
			}
			sfVector2f tempPositionSprite = { x * 60 + OFFSET, y * 60 }; //positionnement du sprite en haut à gauche
			sfSprite_setPosition(sprite[temp], tempPositionSprite);
		}
	}
	charSprite[1] = sfSprite_create();
	sfSprite_setTexture(charSprite[1], texture[39], sfTrue);
	sfVector2f positionChar = { 0 + OFFSET, 610 }; //positionnement du sprite en haut à gauche
	sfSprite_setPosition(charSprite[1], positionChar);

}

void CheckEvent(sfRenderWindow* window, sfEvent event) {
	while (sfRenderWindow_pollEvent(window, &event))
	{
		// Fermeture en appuyant sur le bouton fermer
		if (event.type == sfEvtClosed)
		{
			sfRenderWindow_close(window);
		}

	}
}

void ClearWindow(sfRenderWindow* window) {
	sfRenderWindow_clear(window, sfBlack);
}

void DrawMapTile(sfRenderWindow* window, sfSprite* sprite[], sfSprite* charSprite[]) {
	for (int index = 0; index < 144; index++) {
		sfRenderWindow_drawSprite(window, sprite[index], NULL);
	}

	sfRenderWindow_drawSprite(window, charSprite[1], NULL);

}

void UpdateScreen(sfRenderWindow* window) {
	sfRenderWindow_display(window);
}

