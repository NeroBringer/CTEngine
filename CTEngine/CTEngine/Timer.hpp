#pragma once
#ifndef CTENGINE_TIMER_HPP
#define CTENGINE_TIMER_HPP

namespace CTEngine
{
	class Timer
	{
	public:
		Timer(); //postcondition: elapsed()==0
		void restart(); //postcondition: elased()==0

		//return elapsed time in seconds
		double elapsed() const;

		// return estimated maximum value for elapsed()
		double elapsed_max() const;


		//return minimun value for elapsed()
		double elapsed_min() const;

		double current_time() const;

	private:
		double start_time_;
	};
}


#endif