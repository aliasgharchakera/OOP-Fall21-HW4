// Inherit from Unit class
#include "Unit.hpp"

class TankBody: public Unit{
    SDL_Rect src, mover;
    public:
    TankBody(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    
};