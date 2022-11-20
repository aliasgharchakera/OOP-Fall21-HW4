// Make composition of TankBody and TankTurret objects in Tank class
#include "Tank-body.hpp"
#include "Tank-turret.hpp"

class Tank: public TankBody, public TankTurret{
    public:
    Tank(SDL_Renderer*, SDL_Texture*, SDL_Rect);
    void draw();
    void TurretForward();
    Bullet fire(SDL_Renderer*, SDL_Texture*);
};