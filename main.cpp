#include "agent.h"
#include "utils.h"

inline void addPlant(agent* agent, int q) {
  agent->invent[0] += q;
}

inline int addAnimal(agent* agent, int q) {
  agent->invent[1] += q;
}

inline int addWood(agent* agent, int q) {
  agent->invent[2] += q;
}

inline int addStone(agent* agent, int q) {
  agent->invent[3] += q;
}

agent createInitialAgent() {
  int r = random(); // TODO: what to randomize
  agent a = {
    {0,0,0,0}, // inventire
    {1, 1, 1, 1, 0, 0},
    {5, 5},
    {1,1}, 
    1,
  };
  return a;
}

#define WORLD_Y 10
#define WORLD_X 10


unsigned char* createWorld() {
  // get perlin noise from file
  // convert to world where 0 grass, 1 stone, 2 wood, 3 water
  // and choose propper distribution of them
  unsigned char world[WORLD_Y][WORLD_X] = {
    {1,1,3,3,3,2,2,2,0,0},
    {1,1,3,3,3,2,2,2,0,0},
    {0,0,3,3,3,0,0,0,0,0},
    {0,0,3,3,3,0,0,0,0,0},
    {0,0,0,3,3,0,0,0,0,0},
    {0,0,0,3,3,3,3,0,0,0},
    {0,0,0,0,3,3,3,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
  };
  return world;
}
int main() {
  initRandom();

}