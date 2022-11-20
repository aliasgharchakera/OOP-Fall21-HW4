#include "BattleField.hpp"
#include<iostream>
void BattleField::drawObjects(){
    // call draw functions of all the objects here
    for(auto& b: bullets){
        b -> draw();
    }
    for (auto& t: tanks){
        t -> draw(); 
    }
}
// creating a tank object dynamically when this function is called
void BattleField::createObject(int x, int y){
    // let's make a rectangel on x, y of the size 30, 10
    SDL_Rect mov = {x, y, 90, 30};
    Tank* t1 = new Tank(gRenderer, assets, mov);
    tanks.push_back(t1);
    //delete t1;
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){
}

void BattleField::fire(){
    cout<<"F key is pressed"<<endl;
    // provide code to fire all of the tanks.
    for (auto& t: tanks){
        Bullet* b1 = new Bullet(t->fire(gRenderer, assets));
        bullets.push_back(b1);
    }
}
// Deleting all the dynamically created objects
void BattleField::deleteObj(){
    for (auto& b: bullets)
        delete b;
    bullets.clear();
    for (auto& t: tanks)
        delete t;
    tanks.clear();
    cout << "delete called" << endl;
}
