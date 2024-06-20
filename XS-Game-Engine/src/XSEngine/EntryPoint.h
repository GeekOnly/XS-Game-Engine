#pragma once

#ifdef XS_PLATFORM_WINDOWS

extern XSEngine::Application* XSEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = XSEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif 
