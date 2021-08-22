#include "renderer.h"
#include "../pch.h"
#include "../utils/globals.h"

namespace render {
	CG::UCanvas* canvas = nullptr;

	CG::UFont* esp_font = nullptr;

	CG::UFont* find_font(const std::string name) {
		/* logged fonts:
			[~] font : Default__Font
			[~] font : RobotoDistanceField
			[~] font : Roboto
			[~] font : ChakraPetch
			[~] font : Monsterrat
			[~] font : RevolutionGothic
			[~] font : DefaultTinyFont
			[~] font : DefaultRegularFont
			[~] font : Politica
		*/
		auto& objs = CG::UObject::GetGlobalObjects();
		for (int i = 0; i < objs.Num(); i++) {
			if (auto item = objs.GetByIndex(i)) {
				if (item && item->IsA(CG::UFont::StaticClass())) {
					if (item->GetName() == name)
						return reinterpret_cast<CG::UFont*>(item);
				}
			}
		}
		return nullptr;
	}

	void draw_text(CG::UFont* font, CG::FString text, int x, int y, CG::FLinearColor clr) {
		if (canvas && font)
			canvas->K2_DrawText(font, text, CG::FVector2D(x, y), CG::FVector2D(1, 1), { clr.R / 255, clr.G / 255, clr.B / 255, clr.A / 255 }, 1.0f, CG::FLinearColor(), CG::FVector2D(), false, false, false, CG::FLinearColor());
	}

	void draw_circle(int x, int y, int radius, CG::FLinearColor clr) {
		if (canvas)
			canvas->K2_DrawPolygon(0, CG::FVector2D(x, y), CG::FVector2D(radius, radius), 32, { clr.R / 255, clr.G / 255, clr.B / 255, clr.A / 255 });
	}

	void draw_line(int x1, int y1, int x2, int y2, int thickness, CG::FLinearColor clr) {
		if (canvas)
			canvas->K2_DrawLine(CG::FVector2D(x1, y1), CG::FVector2D(x2, y2), thickness, { clr.R / 255, clr.G / 255, clr.B / 255, clr.A / 255 });
	}

	void draw_corner_box(int x, int y, int w, int h, int thickness, CG::FLinearColor clr) {
		if (canvas) {
			draw_line(x, y, x, y + (h / 5), thickness, clr);
			draw_line(x, y, x + (w / 5), y, thickness, clr);
			draw_line(x + w, y, x + w - (w / 5), y, thickness, clr);
			draw_line(x + w, y, x + w, y + (h / 5), thickness, clr);
			draw_line(x, y + h, x + (w / 5), y + h, thickness, clr);
			draw_line(x, y + h, x, y + h - (h / 5), thickness, clr);
			draw_line(x + w, y + h, x + w - (w / 5), y + h, thickness, clr);
			draw_line(x + w, y + h, x + w, y + h - (h / 5), thickness, clr);
		}
	}
}