#include <iostream>
#include <random> 
#include <chrono> 
namespace mkn {
int random(int a,int b) {    
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::uniform_int_distribution<> dist(a,b); 
    return dist(engine);
}
double random(double a,double b) {
    std::random_device seed_gen;
    std::mt19937 engine(seed_gen());
    std::uniform_real_distribution<> real_dist(a,b);
    return real_dist(engine);
}
}