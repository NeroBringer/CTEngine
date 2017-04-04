#ifndef CTENGINE_RENDERSETTINGS_HPP
#define CTENGINE_RENDERSETTINGS_HPP
#pragma once

namespace CTEngine
{
	// 建立渲染窗口的设置
	/////////////////////////////////////////////////////////////////////////////////
	struct RenderSettings
	{
		RenderSettings()
			: hide_win(false), full_screen(false),
			left(0), top(0),
			color_fmt(EF_ARGB8), depth_stencil_fmt(EF_D16),
			sample_count(1), sample_quality(0),
			motion_frames(0), hdr(false), fft_lens_effects(false), ppaa(false), gamma(false), color_grading(false),
			stereo_method(STM_None), stereo_separation(0),
			display_output_method(DOM_sRGB), paper_white(100), display_max_luminance(100)
		{
		}

		bool	hide_win;
		bool	full_screen;
		int		left;
		int		top;
		int		width;
		int		height;
		ElementFormat color_fmt;
		ElementFormat depth_stencil_fmt;
		uint32_t sample_count;
		uint32_t sample_quality;
		uint32_t sync_interval;
		uint32_t motion_frames;
		bool hdr;
		bool fft_lens_effects;
		bool ppaa;
		bool gamma;
		bool color_grading;

		StereoMethod stereo_method;
		float stereo_separation;

		DisplayOutputMethod display_output_method;
		uint32_t paper_white;
		uint32_t display_max_luminance;

		std::vector<std::pair<std::string, std::string>> options;
}

#endif

