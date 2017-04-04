#ifndef CTENGINE_PREDECLARE_HPP
#define CTENGINE_PREDECLARE_HPP
#pragma once

namespace CTEngine
{
	class Camera;
	typedef std::shared_ptr<Camera> CameraPtr;
	class CameraController;
	typedef std::shared_ptr<CameraController> CameraControllerPtr;

	class App3DFramework;
	class Window;
	typedef std::shared_ptr<Window> WindowPtr;

	struct RenderSettings;
}


#endif

