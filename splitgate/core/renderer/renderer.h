#pragma once
#include <string>

namespace CG {
	class UCanvas;
	class UFont;
	class FString;
	class FLinearColor;
	class APortalWarsCharacter;
	class APortalWarsBasePlayerController;
}

namespace render {
	extern CG::UCanvas* canvas;

	extern CG::UFont* esp_font;

	CG::UFont* find_font(const std::string name);

	void draw_text(CG::UFont* font, CG::FString text, int x, int y, CG::FLinearColor clr);

	void draw_circle(int x, int y, int radius, CG::FLinearColor clr);

	void draw_line(int x1, int y1, int x2, int y2, int thickness, CG::FLinearColor clr);

	void draw_corner_box(int x, int y, int w, int h, int thickness, CG::FLinearColor clr);
}