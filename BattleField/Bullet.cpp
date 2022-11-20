#include "Bullet.hpp"    

    Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {616, 201, 302, 96};
    }
// drawing animations when the bullet hits the right edge
    void Bullet::draw(){
        if (mover.x >= 1000 - mover.w){
                animation(n);
                n++;
        }
        else
            mover.x+=10;
        Unit::draw(src, mover);
    }
// defining the animation function
    void Bullet::animation(int n){
        switch (n){
        case 0: src = {39, 394, 92, 95};
        mover.w = 30; mover.h = 32; mover.y -= 25;
        break;
        case 1: src = {189, 373, 133, 141};
        mover.w = 44; mover.h = 47;
        break;
        case 2: src = {339, 362, 162, 165};
        mover.w = 54; mover.h = 55;
        break;
        case 3: src = {506, 362, 162, 165};
        mover.w = 54; mover.h = 55;
        break;
        case 4: src = {681, 362, 154, 165};
        mover.w = 51; mover.h = 55;
        break;
        case 5: src = {847, 362, 154, 165};
        mover.w = 51; mover.h = 55;
        break;
        case 6: src = {1010, 362, 158, 165};
        mover.w = 53; mover.h = 55;
        break;
        case 8: src = {0, 0, 0, 0};
        mover.w = 0; mover.h = 0;
        break;
        }
    }