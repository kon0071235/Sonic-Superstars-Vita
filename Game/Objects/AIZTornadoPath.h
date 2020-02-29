#ifndef OBJ_AIZTORNADOPATH_H
#define OBJ_AIZTORNADOPATH_H

#include "../../SonicMania.h"

//Object Class
class ObjectAIZTornadoPath : public Object {
public:

};

//Entity Class
class EntityAIZTornadoPath : public Entity {
public:

};

//Object Entity
ObjectAIZTornadoPath AIZTornadoPath;

//Entity Functions
void AIZTornadoPath_Update();
void AIZTornadoPath_EarlyUpdate();
void AIZTornadoPath_LateUpdate();
void AIZTornadoPath_Draw();
void AIZTornadoPath_Setup(void* subtype);
void AIZTornadoPath_StageLoad();
void AIZTornadoPath_GetAttributes();

#endif //!OBJ_AIZTORNADOPATH_H
