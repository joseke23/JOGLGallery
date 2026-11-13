#ifndef RENDERER
#define RENDERER

#include "model.h"
#include "light.h"
#include "camera.h"
#include <vector>
class Renderer
{
public:
    Renderer();

    void renderModel(Model model, std::vector<Light> lights, Camera camera);
    void renderModels(std::vector<Model> models, std::vector<Light> lights, Camera camera);
};
#endif