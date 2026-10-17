// undefined FUN_08003240(void)
// entry 0x8003240


void FUN_08003240(int param_1,undefined4 param_2,uint param_3,ushort param_4)

{
  FUN_08002c94(param_1,0x080032f1);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(ushort *)(param_1 + 0x10) =
       (ushort)0xfffffc00 & *(ushort *)(param_1 + 0x10) | param_4 & (ushort)0x000003ff;
  *(byte *)(param_1 + 0xd) = (byte)(((param_3 & 0xff) >> 2) << 6) | 0x10;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 1 | (byte)((param_3 & 3) << 6);
  *(ushort *)(param_1 + 0xe) = (ushort)0xfffffe00 & *(ushort *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}


