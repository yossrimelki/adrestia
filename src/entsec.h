
#include "defs.h"
struct perso
 { SDL_Surface *perso;
  SDL_Rect posperso;
  int h;
  int w;
      
  }; 
typedef struct perso personnage;

struct Enemy
{
  SDL_Surface *en;
  SDL_Rect posen;
  int direction;
  int distance;
  int position_initiale;
 };
typedef struct Enemy enemy;

struct boxx
 {
  SDL_Surface *box;
  SDL_Rect posbox;
   
 };
typedef struct boxx box;
enemy deplacement_aleatoire(enemy enemyy);
personnage access_box1 (box boxx,personnage persbox1, int access_box1);
personnage access_box2(box boxx,personnage persbox2,int access_box1);
