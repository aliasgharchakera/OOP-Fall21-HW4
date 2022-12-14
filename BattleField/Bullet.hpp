#include "Unit.hpp"
#pragma once

class Bullet: public Unit{
    SDL_Rect src, mover;
    // to keep track of the current animation
    int n = 0;
    public:
    Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    // declaring a function to add animations when the bullet hits the right edge
    void animation(int);
    // SDL_Rect position();
};