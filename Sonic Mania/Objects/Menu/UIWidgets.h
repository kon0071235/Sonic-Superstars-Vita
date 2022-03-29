#ifndef OBJ_UIWIDGETS_H
#define OBJ_UIWIDGETS_H

#include "SonicMania.h"

// Object Class
struct ObjectUIWidgets {
    RSDK_OBJECT
#if RETRO_USE_PLUS
    int32 buttonColours[16];
    int32 timer;
    Animator unusedAnimator1;
    Animator unusedAnimator2;
#else
    int32 timer;
    int32 buttonColours[16];
#endif
    Animator frameAnimator;
    Animator arrowsAnimator;
    uint16 uiFrames;
#if RETRO_USE_PLUS
    uint16 saveSelFrames;
#endif
    uint16 textFrames;
    uint16 fontFrames;
    uint16 sfxBleep;
    uint16 sfxAccept;
    uint16 sfxWarp;
    uint16 sfxEvent;
    uint16 sfxWoosh;
    uint16 sfxFail;
#if RETRO_USE_PLUS
    colour buttonColour;
#endif
};

// Entity Class
struct EntityUIWidgets {
    RSDK_ENTITY
    StateMachine(state); // unused
};

// Object Struct
extern ObjectUIWidgets *UIWidgets;

// Standard Entity Events
void UIWidgets_Update(void);
void UIWidgets_LateUpdate(void);
void UIWidgets_StaticUpdate(void);
void UIWidgets_Draw(void);
void UIWidgets_Create(void* data);
void UIWidgets_StageLoad(void);
#if RETRO_INCLUDE_EDITOR
void UIWidgets_EditorDraw(void);
void UIWidgets_EditorLoad(void);
#endif
void UIWidgets_Serialize(void);

// Extra Entity Functions
void UIWidgets_ApplyLanguage(void);

void UIWidgets_DrawRectOutline_Black(int32 height, int32 width, int32 x, int32 y);   // USERCALL -> x, y, w, h
void UIWidgets_DrawRectOutline_Blended(int32 height, int32 width, int32 x, int32 y); // USERCALL -> x, y, w, h
void UIWidgets_DrawRectOutline_Flash(int32 height, int32 width, int32 x, int32 y);   // USERCALL -> x, y, w, h
void UIWidgets_DrawRightTriangle(int32 x, int32 y, int32 size, int32 red, int32 green, int32 blue);
void UIWidgets_DrawEquilateralTriangle(int32 x, int32 y, int32 size, uint8 flag, int32 red, int32 green, int32 blue, InkEffects ink);
void UIWidgets_DrawParallelogram(int32 height, int32 width, int32 edgeSize, int32 red, int32 green, int32 blue, int32 x, int32 y); // USERCALL -> x, y, w, h, edgeSize, r, g, b
void UIWidgets_DrawUpDownArrows(int32 x, int32 y, int32 arrowDist);
void UIWidgets_DrawLeftRightArrows(int32 x, int32 y, int32 arrowDist);
Vector2 UIWidgets_DrawTriJoinRect(int32 x, int32 y, colour leftColour, colour rightColour);
#if RETRO_USE_PLUS
void UIWidgets_DrawTime(int32 x, int32 y, int32 minutes, int32 seconds, int32 milliseconds);
#endif

#endif //!OBJ_UIWIDGETS_H
