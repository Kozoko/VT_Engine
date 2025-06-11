#pragma once

#include "Core.h"

namespace Tub {

	class TUB_API Application {
	public:
		Application();
		~Application();

		void Run();
	};

	// To be deffine
	Application* CreateApplication();
}

