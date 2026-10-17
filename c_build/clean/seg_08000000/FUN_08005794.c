// undefined FUN_08005794(void)
// entry 0x8005794


void
FUN_08005794(undefined4 *param_1,undefined4 param_2,short param_3,ushort param_4,int param_5,
            int param_6)

{
  byte bVar1;
  *param_1 = param_2;
  *(char *)((int)param_1 + 0x37) = (char)param_3;
  *(char *)(param_1 + 0xe) = (char)param_4;
  *(char *)((int)param_1 + 0x39) = (char)param_5;
  *(char *)((int)param_1 + 0x3a) = (char)param_6;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  bVar1 = (byte)~(byte)(param_3 >> 0xf) >> 7;
  if (-1 < (int)((uint)param_4 * 0x10000)) {
    bVar1 = (byte)~(byte)(param_3 >> 0xf) >> 7 | 2;
  }
  if (-1 < param_5 * 0x10000) {
    bVar1 = bVar1 | 4;
  }
  if (-1 < param_6 * 0x10000) {
    bVar1 = bVar1 | 8;
  }
  *(byte *)((int)param_1 + 0x36) = bVar1;
  return;
}


