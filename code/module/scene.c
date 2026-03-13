/*
This is for scene managing, such as loading and drawing the background.
*/

#include "scene.h"

scene scene_init(Settings* game_settings){
    /* Initialize the game scene. */
    scene new_scene = {0};

    //load main menu background
    Image img = LoadImage("../assets/images/background/Mountain/parallax-mountain-bg.png");
    ImageResize(&img, game_settings->window_width, game_settings->window_height);
    new_scene.mainmenu_background = LoadTextureFromImage(img);
    UnloadImage(img);

    //load game background 1
    img = LoadImage("../assets/images/background/Mountain/parallax-mountain-bg.png");
    ImageResize(&img, game_settings->window_width, game_settings->window_height);
    new_scene.game_background_1 = LoadTextureFromImage(img);
    UnloadImage(img);

    return new_scene;
}

// Draws the main menu background.
void draw_mainmenu(scene* scene) {
    DrawTexture(scene->mainmenu_background, 0, 0, WHITE);
}