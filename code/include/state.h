#ifndef STATE_H
#define STATE_H

typedef enum{
    /* This enum contains the states of the game. */
    MAINMENU,
    GAMEPLAY,
    PAUSE,
    SETTINGS,
    GAMEOVER,
    VIDEO_CUTSCENE,
    DIALOGUE_CUTSCENE
} GameState;

#endif