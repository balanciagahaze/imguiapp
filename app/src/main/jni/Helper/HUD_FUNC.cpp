ASTExtraPlayerCharacter *g_LocalPlayer;
ASTExtraPlayerController *g_PlayerController;
FCameraCacheEntry  CameraCache = FCameraCacheEntry();
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(g_PlayerController, w, true, s)

int SizeXx = 0;
int SizeYy = 0;

#define IM_PI 3.14159265358979323846f
#define RAD2DEG( x )  ( (float)(x) * (float)(180.f /  M_PI) )
#define DEG2RAD( x ) ( (float)(x) * (float)( M_PI / 180.f) )

#define TSL_FONT_DEFAULT_SIZE 20
static UFont *tslFont = 0, *robotoTinyFont = 0;

void *LoadFont(void *)
{
    while (!tslFont || !robotoTinyFont)
    {
        tslFont = UObject::FindObject<UFont>("Font Roboto.Roboto");
        robotoTinyFont = UObject::FindObject<UFont>("Font RobotoDistanceField.RobotoDistanceField");
        sleep(1);
    }
    return 0;
}

void DrawCircle(AHUD *HUD, int x, int y, int radius, int numsides, FLinearColor OutlineColor)
{
	UCanvas *Canvas = HUD->Canvas;
	float Step = M_PI * 2.0 / numsides;
	int Count = 0;
	FVector2D V[128];
	for (float a = 0; a < M_PI * 2.0; a += Step)
	{
		float screenWidth = radius * cos(a) + x;
		float Y1 = radius * sin(a) + y;
		float X2 = radius * cos(a + Step) + x;
		float Y2 = radius * sin(a + Step) + y;
		V[Count].X = screenWidth;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		Canvas->K2_DrawLine(FVector2D({V[Count].X, V[Count].Y}), FVector2D({X2, Y2}), 1.f, OutlineColor);
	}
}

void DrawOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = false) {
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    DebugCanvas->K2_DrawText(robotoTinyFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}

void DrawText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, bool isCenter = false)
{
    UCanvas *Canvas = HUD->Canvas;
    Canvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, false, {});
}

#define COLOR_WHITE FLinearColor(1.f, 1.f, 1.f, 1.f)
#define COLOR_BLACK FLinearColor(0, 0, 0, 1.f)
#define COLOR_RED FLinearColor(1.f, 0, 0, 1.f)
#define COLOR_GREEN FLinearColor(0, 0.5f, 0, 1.f)
#define COLOR_BLUE FLinearColor(0, 0, 1.f, 1.f)
#define COLOR_YELLOW FLinearColor(1.f, 1.f, 0, 1.f)

FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}

void DrawRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, float Thickness, FLinearColor Color) {
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X + Width, Pos.Y, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y, Pos.X, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X + Width, Pos.Y, Pos.X + Width, Pos.Y + Height, Color, Thickness);
    HUD->DrawLine(Pos.X, Pos.Y + Height, Pos.X + Width, Pos.Y + Height, Color, Thickness);
}

void DrawFilledRectangle(AHUD *HUD, FVector2D Pos, float Width, float Height, FLinearColor Color) {
    HUD->DrawRect(Color, Pos.X, Pos.Y, Width, Height);
}

void DrawLine(AHUD *HUD, FVector2D posFrom, FVector2D posTo, float Thickness, FLinearColor Color) {
    HUD->DrawLine(posFrom.X, posFrom.Y, posTo.X, posTo.Y, Color, Thickness);
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool & outbuff) {
 bool flag = false;
 double num = (double)Yaw;
 double num2 = num * 0.017453292519943295;
 float num3 = (float)std::cos(num2);
 float num4 = (float)std::sin(num2);
 float num5 = Origin.X - LocalOrigin.X;
 float num6 = Origin.Y - LocalOrigin.Y;
 struct FVector Xector;
 Xector.X = (num6 * num3 - num5 * num4) / 150.f;
 Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
 struct FVector Xector2;
 Xector2.X = Xector.X + PosX + Size.X / 2.f;
 Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
 bool flag2 = Xector2.X > PosX + Size.X;
 if (flag2) {
  Xector2.X = PosX + Size.X;
 } else {
  bool flag3 = Xector2.X < PosX;
  if (flag3) {
   Xector2.X = PosX;
  }
 }
 bool flag4 = Xector2.Y > PosY + Size.Y;
 if (flag4) {
  Xector2.Y = PosY + Size.Y;
 } else {
  bool flag5 = Xector2.Y < PosY;
  if (flag5) {
   Xector2.Y = PosY;
  }
 }
 bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
 if (flag6) {
  flag = true;
 }
 outbuff = flag;
 return Xector2;
}

bool isEqual(std::string s1, const char* check) {
    std::string s2(check);
    return (s1 == s2);
}
