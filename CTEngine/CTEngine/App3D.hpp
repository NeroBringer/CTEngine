#pragma once
#ifndef CTENGINE_APP3D_HPP
#define CTENGINE_APP3D_HPP
#include "CTEngine.hpp"
#include "PreDeclare.hpp"
#include "Timer.hpp"

namespace CTEngine
{
	class App3DFramework : noncopyable
	{
	public:
		enum UpdateRetValue
		{
			URV_NeedFlush = 1UL << 0,
			URV_Finished = 1UL << 1,
			URV_Overlay = 1UL << 2,
			URV_SkipPostProcess = 1UL << 3,
			URV_OpaqueOnly = 1UL << 4,
			URV_TransparencyBackOnly = 1UL << 5,
			URV_TransparencyFrontOnly = 1UL << 6,
			URV_ReflectionOnly = 1UL << 7,
			URV_SpecialShadingOnly = 1UL << 8,
			URV_SimpleForwardOnly = 1UL << 9,
			URV_VDMOnly = 1UL << 10
		};

	public:
		explicit App3DFramework(std::string const & name);
		App3DFramework(std::string const & name, void* native_wnd);
		virtual ~App3DFramework();

		void Create();
		void Destroy();
		void Suspend();
		void Resume();
		void Refresh();

		std::string const & Name() const
		{
			return name_;
		}
		WindowPtr MakeWindow(std::string const & name);
// 		WindowPtr MakeWindow(std::string const & name, RenderSettings const & settings);
// 		WindowPtr MakeWindow(std::string const & name, RenderSettings const & settings, void* native_wnd);
		WindowPtr const & MainWnd() const
		{
			return main_wnd_;
		}

		virtual bool ConfirmDevice() const;
		 
		Camera const & ActiveCamera() const;
		Camera& ActiveCamera();

		uint32_t TotalNumFrames() const;
		float FPS() const;
		float AppTime() const;
		float FrameTime() const;

		void Run();
		void Quit();

		virtual void OnResize(uint32_t width, uint32_t height);

	protected:
		//void LookAt(float3 const & eye, float3 const & lookAt);
		//void LookAt(float3 const & eye, float3 const & lookAt, float3 const & up);
		//void Proj(float nearPlane, float farPlane);

	protected:
		uint32_t Update(uint32_t pas);
		void UpdateStats();

	protected:
		std::string name_;

		// State
		uint32_t total_num_frames_;
		float fps_;
		float accumulate_time_;
		uint32_t num_frames_;

		Timer timer_;
		float app_time_;
		float frame_time_;

		WindowPtr main_wnd_;


	};
}



#endif