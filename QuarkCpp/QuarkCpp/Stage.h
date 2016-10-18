#pragma once
#include "DisplayObjectContainer.h"
#include "Quark.h"

namespace QuarkCpp
{
	class Stage :
		public DisplayObjectContainer, 
		public TimerListener
	{

	private:

		Quark* parent = nullptr;

	public:

		const char* getType() {
			return "Stage";
		}

		void step() {
			parent->getContext();
		}

		Stage();
		~Stage();
	};


}
