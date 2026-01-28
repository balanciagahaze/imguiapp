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
static UFont *tslFont = 0, *robotoTinyFont = 0, *boldFont = 0;

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
	UCanvas *DebugCanvas = HUD->DebugCanvas;
	float Step = M_PI * 2.0 / numsides;
	int Count = 0;
	FVector2D V[128];
	for (float a = 0; a < M_PI * 2.0; a += Step)
	{
		float SizeXx = radius * cos(a) + x;
		float Y1 = radius * sin(a) + y;
		float X2 = radius * cos(a + Step) + x;
		float Y2 = radius * sin(a + Step) + y;
		V[Count].X = SizeXx;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		DebugCanvas->K2_DrawLine(FVector2D({V[Count].X, V[Count].Y}), FVector2D({X2, Y2}), 1.f, OutlineColor);
	}
}

bool W2S2(FVector worldPos, FVector2D *screenPos) {
return g_PlayerController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}

void AddLine(AHUD *HUD,FVector2D origin, FVector2D dest, FLinearColor Color, float Thickness)
{
 HUD->DrawLine(origin.X, origin.Y, dest.X, dest.Y, Color, 2.0f);
}
void Box3D(AHUD *HUD, FVector posFrom, FVector posTo, FLinearColor Color, float Thickness) {
    posFrom.X -= posTo.X / 2.f;
    posFrom.Y -= posTo.Y / 2.f;
    posFrom.Z -= posTo.Z / 2.f;
 
 FVector one = posFrom;
 FVector two = posFrom; two.X += posTo.X;
 FVector tree = posFrom; tree.X += posTo.X; tree.Y += posTo.Y;
 FVector four = posFrom; four.Y += posTo.Y;

 FVector five = one; five.Z += posTo.Z;
 FVector six = two; six.Z += posTo.Z;
 FVector seven = tree; seven.Z += posTo.Z;
 FVector eight = four; eight.Z += posTo.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S(one, &s1) && W2S(two, &s2) && W2S(tree, &s3) && W2S(four, &s4) &&
    W2S(five, &s5) && W2S(six, &s6) && W2S(seven, &s7) && W2S(eight, &s8))
    {  
    AddLine(HUD,s1, s2, Color, Thickness);
    AddLine(HUD,s2, s3, Color, Thickness);
    AddLine(HUD,s3, s4, Color, Thickness);
    AddLine(HUD,s4, s1, Color, Thickness);
    AddLine(HUD,s5, s6, Color, Thickness);
    AddLine(HUD,s6, s7, Color, Thickness);
    AddLine(HUD,s7, s8, Color, Thickness);
    AddLine(HUD,s8, s5, Color, Thickness);
    AddLine(HUD,s1, s5, Color, Thickness);
    AddLine(HUD,s2, s6, Color, Thickness);
    AddLine(HUD,s3, s7, Color, Thickness);
    AddLine(HUD,s4, s8, Color, Thickness);
}
}

void DrawSmallOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = false)
{
UCanvas *DebugCanvas = HUD->DebugCanvas;
DebugCanvas->K2_DrawText(robotoTinyFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}

void DrawText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, bool isCenter = false)
{
UCanvas *DebugCanvas = HUD->DebugCanvas;
DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, false, {});
}

void DrawInfoText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, bool isCenter = false)
{
UCanvas *DebugCanvas = HUD->DebugCanvas;
DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, 1.f, {}, {}, isCenter, isCenter, true, OutlineColor);
}

void DrawOutlinedText(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, float TextScale /*= 1.f*/, bool isCenterX /*= false*/, bool isCenterY /*= false*/) {
    UCanvas *DebugCanvas = HUD->DebugCanvas;

    // Calculate text size
    FVector2D TextSize = DebugCanvas->K2_TextSize(tslFont, Text, FVector2D(TextScale, TextScale));

    // Adjust X position if centerX is true
    if (isCenterX) {
        Pos.X -= TextSize.X / 2;
    }

    // Adjust Y position if centerY is true
    if (isCenterY) {
        Pos.Y -= TextSize.Y / 2;
    }

    // Draw the text
    DebugCanvas->K2_DrawText(tslFont, Text, Pos, Color, TextScale, {}, {}, isCenterX, isCenterY, true, OutlineColor);
}

void DrawTextCenteredWithSeparator(AHUD *HUD, FString Text, FVector2D Pos, FLinearColor Color, FLinearColor OutlineColor, UFont* CustomFont, float TextScale, bool isCenterX = false, bool isCenterY = false, bool isCenter = false)
{
    UCanvas *DebugCanvas = HUD->DebugCanvas;
    
    FVector2D TextSize = DebugCanvas->K2_TextSize(CustomFont, Text, FVector2D(TextScale, TextScale));
    FVector2D SeparatorSize = DebugCanvas->K2_TextSize(CustomFont, "E", FVector2D(TextScale, TextScale));

    FVector2D TextPos = Pos;
    if (isCenter)
    {
        TextPos.X = ((float)DebugCanvas->SizeX - (TextSize.X + SeparatorSize.X)) / 2;
    }

    DebugCanvas->K2_DrawText(CustomFont, Text, TextPos, Color, TextScale, {}, {}, isCenterX, isCenterY, true, OutlineColor);
}

#define COLOR_WHITE FLinearColor(1.f, 1.f, 1.f, 1.f)
#define COLOR_BLACK FLinearColor(0, 0, 0, 1.f)
#define COLOR_RED FLinearColor(1.f, 0, 0, 1.f)
#define COLOR_GREEN FLinearColor(0, 0.5f, 0, 1.f)
#define COLOR_BLUE FLinearColor(0, 0, 1.f, 1.f)
#define COLOR_YELLOW FLinearColor(1.f, 1.f, 0, 1.f)
#define COLOR_BLUE_SKY FLinearColor(0.0f, 0.5f, 1.0f, 1.0f)

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

void DrawLineHealth(AHUD *HUD, FVector2D posFrom, FVector2D posTo, float Thickness, FLinearColor Color) {
    HUD->DrawLine(posFrom.X, posFrom.Y, posTo.X, posTo.Y, Color, Thickness);
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

FRotator ToRotator(FVector local, FVector target) {
    FVector rotation;

    rotation.X = local.X - target.X;
    rotation.Y = local.Y - target.Y;
    rotation.Z = local.Z - target.Z;
    FRotator newViewAngle = {0};

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float)IM_PI);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float)IM_PI);
    newViewAngle.Roll = (float)0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}

ImTextureID 读取图片(const unsigned char *buf, int len)
{
	int w, h, n;
	stbi_uc *data = stbi_png_load_from_memory(buf, len, &w, &h, &n, 0);
	GLuint texture;
	glGenTextures(1, &texture);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	if (n == 3)
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	}
	else
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
	}
	stbi_image_free(data);
	ImTextureID image_id = texture;
	return image_id;
}

#include <img.h>
#include <sound.h>
ImTextureID LOGO图片;
void 加载图片(ImVec2 center, float size)
{
    ImGui::SetCursorPos({0, 180});   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
    ImDrawList *draw_list = ImGui::GetWindowDrawList();   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
    draw_list->AddImage(LOGO图片, {center.x + size / 1, center.y + size / 1}, {center.x + size / 1, center.y + size / 1});   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
}

void DrawLogo(ImVec2 center, float size) {
ImGui::SetCursorPos({0, 180});   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
ImGui::SetCursorPos({0, 180});   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
ImDrawList *draw_list = ImGui::GetWindowDrawList();   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
draw_list->AddImage(LOGO图片,{center.x - size /1,center.y - size / 1},{center.x + size / 1,center.y + size / 1});   /*分享电报 删除死全家 记得加入后续有更多源码分享https://t.me/HGULDGK*/
}

void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
const auto points_center = (points.at(0) + points.at(1) + points.at(2)) / 3;
for (auto & point : points) {
point = point - points_center;
const auto temp_x = point.X;
const auto temp_y = point.Y;
const auto theta = DEG2RAD(rotation);
const auto c = cosf(theta);
const auto s = sinf(theta);
point.X = temp_x * c - temp_y * s;
point.Y = temp_x * s + temp_y * c;
point = point + points_center;}}

void VectorAnglesRadar(FVector& forward, FVector& angles) {
    if (forward.X == 0.f && forward.Y == 0.f)
    {
        angles.X = forward.Z > 0.f ? -90.f : 90.f;
        angles.Y = 0.f;
    }
    else
    {
        angles.X = RAD2DEG(atan2(-forward.Z, forward.Size()));
        angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
    }
    angles.Z = 0.f;
}

void DrawTriangle(AHUD* HUD, std::array<FVector2D, 3> Vertices, float Thickness, FLinearColor Color) {
    DrawLine(HUD, Vertices[0], Vertices[1], Thickness, Color);
    DrawLine(HUD, Vertices[1], Vertices[2], Thickness, Color);
    DrawLine(HUD, Vertices[2], Vertices[0], Thickness, Color);
}

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void RotateTriangle(std::array<FVector2D, 3>& points, float rotation) {
    const FVector2D points_center = (points[0] + points[1] + points[2]) / 3;

    const float theta = rotation * (M_PI / 180.0f);
    const float c = std::cos(theta);
    const float s = std::sin(theta);

    for (auto& point : points) {
        point -= points_center;
        const float temp_x = point.X;
        const float temp_y = point.Y;
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        point += points_center;
    }
}

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
if (forward.X == 0.f && forward.Y == 0.f) {
angles.X = forward.Z > 0.f ? -90.f : 90.f;
angles.Y = 0.f;
} else {
angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
}angles.Z = 0.f;}
