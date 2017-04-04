#pragma once
#ifndef CTENGINE_NONCOPYABLE
#define CTENGINE_NONCOPYABLE
namespace CTEngine
{
	class noncopyable
	{
	protected:
		noncopyable() {}
		~noncopyable() {}
	private:
		noncopyable(const noncopyable&);
		noncopyable& operator=(const noncopyable&);
	};
}

#endif // !CTENGINE_NONCOPYABLE
