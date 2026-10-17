// undefined FUN_08039f84(void)
// entry 0x8039f84


void FUN_08039f84(int param_1)

{
  *(undefined1 *)(param_1 + 0x144) = 0;
  *(byte *)(DAT_08039fd0 + param_1) = *(byte *)(DAT_08039fd0 + param_1) & 0xf5;
  *(undefined1 *)(param_1 + DAT_08039fd4) = 0xff;
  *(undefined1 *)(param_1 + 0x148) = 0;
  *(undefined1 *)(param_1 + 0x167) = 0;
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x166) = 0;
  return;
}


