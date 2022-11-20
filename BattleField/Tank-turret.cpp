#include "Tank-turret.hpp"    

    TankTurret::TankTurret(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {603, 0, 507, 152};
    }
// drawing tank body and resetting its position after fire
    void TankTurret::draw(){
        Unit::draw(src, mover);
        if (forward == 1){
            mover.x += 30;
            forward = 0;
        }
        // in case tanks need to be moved
        mover.x+=2;
    }
// keeping track and moving the turret when fire is called
    void TankTurret::TurretForward(){
        mover.x -= 30;
        forward = 1;
    }
// Creating bullets for each tank when the fire function is called
    Bullet TankTurret::fire(SDL_Renderer* rend, SDL_Texture* asst){
        SDL_Rect movb = {0, 0, 0, 0};
        movb.x = mover.x + mover.w; movb.y = mover.y + 11;
        movb.w = 30; movb.h = 10;
        // cout << movb.x << " " << movb.y << endl;
        TurretForward();
        Bullet b(rend, asst, movb);
        return b;
    }