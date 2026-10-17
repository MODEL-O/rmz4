// undefined FUN_080f5268(void)
// entry 0x80f5268


undefined4 FUN_080f5268(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x14) & 1) != 0) &&
     (FUN_08006984(0x53), piVar1 = DAT_080f52f8, (*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    if (*DAT_080f52f8 != 0) {
      iVar2 = *(int *)(param_1 + 0x2c);
      *(byte *)(iVar2 + 0xb4) = *(byte *)(*DAT_080f52f8 + 10) >> 4 & 1;
      FUN_0803a578(*piVar1,8,0);
      piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080f52fc);
      *(undefined4 *)(iVar2 + 0xc) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 8);
      *(char *)(iVar2 + 0x10) = *(char *)(iVar2 + 0x10) + '\x03';
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined1 *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      *(byte *)(DAT_080f5300 + DAT_080f5304) =
           (byte)(1 << *(sbyte *)(iVar2 + 0x11)) | *(byte *)(DAT_080f5300 + DAT_080f5304);
      FUN_080f3f1c(iVar2);
    }
  }
  return in_lr;
}


