
#include <Tub.h>

class Sandbox : public Tub::Application {

public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Tub::Application* Tub::CreateApplication() {
	return new Sandbox();
}