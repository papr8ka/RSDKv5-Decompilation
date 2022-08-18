using ShaderEntry = ShaderEntryBase;

class RenderDevice : public RenderDeviceBase
{
  static bool Init();
  static void CopyFrameBuffer();
  static void ProcessDimming();
  static void FlipScreen();
  static void Release(bool32 isRefresh);

  static void RefreshWindow();

  static void SetupImageTexture(int32 width, int32 height, uint8* imagePixels);
  static void SetupVideoTexture_YUV420(int32 width, int32 height, uint8* imagePixels);
  static void SetupVideoTexture_YUV422(int32 width, int32 height, uint8* imagePixels);
  static void SetupVideoTexture_YUV424(int32 width, int32 height, uint8* imagePixels);

  static bool ProcessEvents();

  static void InitFPSCap();
  static bool CheckFPSCap();

  static void LoadShader(const char* fileName, bool32 linear);
private:
  static bool InitShaders();
  static bool SetupRendering();
  static void InitVertexBuffer();
  static bool InitGraphicsAPI();

  static void GetDisplays();
}
