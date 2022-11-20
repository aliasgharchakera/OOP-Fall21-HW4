#include "Tank.hpp"

Tank::Tank(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): TankTurret::TankTurret(rend, ast, mov), TankBody::TankBody(rend, ast, mov){}

void Tank::draw(){
    TankBody::draw();
    TankTurret::draw();
}

void Tank::TurretForward(){
    TankTurret::TurretForward();
}

Bullet Tank::fire(SDL_Renderer* rend, SDL_Texture* asst){
    return TankTurret::fire(rend, asst);
}