#include "JAApp.h"

#define MAX_LOADSTRING 100

int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR lpCmdLine,
	int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	MSG msg;
	HACCEL hAccelTable;

	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	int x = 3, y = 4, z = 0;

	z = Myproc1(x, y);

	if (!InitInstance(hInstance, nCmdShow)) {
		return FALSE;
	}
	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TEST));

	while (GetMessage(&msg, NULL, 0, 0)) {
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	return (int)msg.wParam;
}