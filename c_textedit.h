#pragma once

//#include "ImGuiColorTextEdit/TextEditor.h"
#include "TextEditor.h"

#if defined __cplusplus
#define EXTERN extern "C"
#else
#include <stdarg.h>
#include <stdbool.h>
#define EXTERN extern
#endif

#define CTextEditor_API extern "C" __declspec(dllexport)

CTextEditor_API void ShowTextEditorDemo(bool* p_open = NULL);
CTextEditor_API void SetLuaLang();
CTextEditor_API void SetText(const char* text);

