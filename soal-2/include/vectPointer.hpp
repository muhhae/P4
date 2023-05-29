#ifndef _VECTPOINTER_HPP
#define _VECTPOINTER_HPP

#include "entity.hpp"

class VectPointer
{
private:
    Entity* entity_ptr;
    
    int vec_index;

public:
    VectPointer(Entity* entity_ptr, int vec_index) {setEntityPtr(entity_ptr); setVecIndex(vec_index);}

    void setEntityPtr(Entity* entity_ptr){this->entity_ptr = entity_ptr;}
    void setVecIndex(int vec_index){this->vec_index = vec_index;}

    Entity* getEntityPtr(){return entity_ptr;}
    int getVecIndex(){return vec_index;}
};
#endif