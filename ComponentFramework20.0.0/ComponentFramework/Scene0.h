#ifndef SCENE0_H
#define SCENE0_H

#include "Scene.h"
union SDL_Event;
class Scene0 : public Scene {
public:
	explicit Scene0();
	virtual ~Scene0();

	virtual bool OnCreate() override;
	virtual void OnDestroy() override;
	virtual void HandleEvents(const SDL_Event& sdlEvent) override;
	virtual void Update(const float deltaTime) override;
	virtual void Render() const override;
};


#endif // SCENE0_H