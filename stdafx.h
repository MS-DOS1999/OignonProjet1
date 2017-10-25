// stdafx.h : fichier Include pour les fichiers Include système standard,
// ou les fichiers Include spécifiques aux projets qui sont utilisés fréquemment,
// et sont rarement modifiés
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



// TODO: faites référence ici aux en-têtes supplémentaires nécessaires au programme

#define FOLDER_IMG "img/" //Définition du dossier d'image
#define OFFSET 280

//prototypes
void SetTexture(char *, sfTexture* [] , char*);
void SetMapTile(char *, sfTexture* [], sfSprite* [], sfSprite*[]);
void CheckEvent(sfRenderWindow*, sfEvent);
void ClearWindow(sfRenderWindow*);
void DrawMapTile(sfRenderWindow*, sfSprite*[], sfSprite*[]);
void UpdateScreen(sfRenderWindow*);
