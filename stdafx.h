// stdafx.h�: fichier Include pour les fichiers Include syst�me standard,
// ou les fichiers Include sp�cifiques aux projets qui sont utilis�s fr�quemment,
// et sont rarement modifi�s
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/OpenGL.h>
#include <SFML/Network.h>
#include <SFML/Audio.h>
#include "time.h"
#include "windows.h"



// TODO: faites r�f�rence ici aux en-t�tes suppl�mentaires n�cessaires au programme

#define FOLDER_IMG "img/" //D�finition du dossier d'image
#define OFFSET 280

//prototypes
void SetTexture(char *, sfTexture* [] , char*);
void SetMapTile(char *, sfTexture* [], sfSprite* [], sfSprite*[]);
void CheckEvent(sfRenderWindow*, sfEvent);
void ClearWindow(sfRenderWindow*);
void DrawMapTile(sfRenderWindow*, sfSprite*[], sfSprite*[]);
void UpdateScreen(sfRenderWindow*);
