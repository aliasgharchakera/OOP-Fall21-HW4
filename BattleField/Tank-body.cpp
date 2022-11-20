#include "Tank-body.hpp"    

    TankBody::TankBody(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {0, 13, 427, 281};
    }
// drawing tank body
    void TankBody::draw(){
        Unit::draw(src, mover);
        mover.x+=2;
    }