// undefined FUN_0800f0ec(void)
// entry 0x800f0ec


void FUN_0800f0ec(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x44) == 0x100) {
    *(uint *)(param_1 + 0x4c) = (uint)(*(ushort *)(param_1 + 0x6c) >> 4);
    *(int *)(param_1 + 0x50) =
         (int)((uint)*(ushort *)((*(byte *)(param_1 + 0x10) + 0x40 & 0xff) * 2 + DAT_0800f128) <<
              0x10) >> 0x16;
  }
  FUN_08007638(param_1,param_2);
  return;
}


