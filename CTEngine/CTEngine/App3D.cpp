#include <CTEngine.hpp>

#include <App3D.hpp>

namespace CTEngine
{
	//¹¹Ôìº¯Êý
	//////////////////////////////////////////////////////////////////
	App3DFramework::App3DFramework(std::string const & name)
		: name_(name), total_num_frames_(0), fps_(0), accumulate_time_(0),
		num_frames_(0), app_time_(0), frame_time_(0)
	{
		//RenderSettings graphics_cfg = new RenderSettings();
		main_wnd_ = this->MakeWindow(name_);
	}

	App3DFramework::~App3DFramework()
	{
		this->Destroy();
	}

	void App3DFramework::Create()
	{

	}


}