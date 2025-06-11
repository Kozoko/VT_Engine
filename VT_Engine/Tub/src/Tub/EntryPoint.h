#pragma once


#ifdef TUB_PLATFORM_WINDOWS

extern Tub::Application* Tub::CreateApplication();

int main(int argc, char** argv) {
	auto app = Tub::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error The Tub only support Windows !
#endif
