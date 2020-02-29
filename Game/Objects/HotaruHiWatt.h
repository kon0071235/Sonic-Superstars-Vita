#ifndef OBJ_HOTARUHIWATT_H
#define OBJ_HOTARUHIWATT_H

#include "../../SonicMania.h"

//Object Class
class ObjectHotaruHiWatt : public Object {
public:

};

//Entity Class
class EntityHotaruHiWatt : public Entity {
public:

};

//Object Entity
ObjectHotaruHiWatt HotaruHiWatt;

//Entity Functions
void HotaruHiWatt_Update();
void HotaruHiWatt_EarlyUpdate();
void HotaruHiWatt_LateUpdate();
void HotaruHiWatt_Draw();
void HotaruHiWatt_Setup(void* subtype);
void HotaruHiWatt_StageLoad();
void HotaruHiWatt_GetAttributes();

#endif //!OBJ_HOTARUHIWATT_H
