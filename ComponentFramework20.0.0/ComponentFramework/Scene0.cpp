#include <glew.h>
#include <iostream>
#include "Debug.h"
#include "Scene0.h"
#include "Camera.h"
#include "DemoObject.h"
#include "ObjLoader.h"
#include "Mesh.h"
#include "Shader.h"
#include "Texture.h"
#include "MMath.h"
#include "Debug.h"
#include "Physics.h"

Scene0::Scene0() {
	Debug::Info("Created Scene1: ", __FILE__, __LINE__);
}


Scene0::~Scene0() {

}

bool Scene0::OnCreate() {
	return true;
}

void Scene0::OnDestroy() {}

void Scene0::HandleEvents(const SDL_Event& sdlEvent) {}

void Scene0::Update(const float deltaTime) {}

void Scene0::Render() const {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	/// Clear the screen
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);




}
