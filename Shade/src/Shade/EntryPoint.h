#pragma once

#ifdef SH_PLATFORM_WINDOWS

extern Shade::Application* Shade::createApplication();

int main(int argc,char** argv)
{
	auto app = Shade::createApplication();
	app->Run();
	delete app;
}

#else
	#error Shade only supports windows
#endif // SH_PLATFORM_WINDOWS
