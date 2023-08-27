#include "Analizator.h"
#include <Windows.h>
#include <string>

using namespace LexicalAnalizator; // Название проекта
[STAThread]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Analizator);

	return 0;
}

