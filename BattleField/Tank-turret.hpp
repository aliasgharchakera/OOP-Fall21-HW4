// Inherit from Unit class
#include "Unit.hpp"
#include "Bullet.hpp"
class TankTurret: public Unit{
    SDL_Rect src, mover;
    // keep track of position of turret after fire
    int forward = 0;
    public:
    TankTurret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void TurretForward();
    void draw();
    Bullet fire(SDL_Renderer*, SDL_Texture*);
};