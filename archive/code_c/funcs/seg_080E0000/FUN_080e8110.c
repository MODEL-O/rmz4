// undefined FUN_080e8110(void)
// entry 0x80e8110


undefined4 FUN_080e8110(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e81a0 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
  iVar2 = DAT_080e81a4;
  iVar1 = *(short *)(DAT_080e81a4 + 0xec) * 0x180;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  iVar2 = *(short *)(iVar2 + 0x6c) * 0x180;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  iVar2 = (iVar2 >> 8) * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = (iVar1 >> 8) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar2 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 3;
  return in_lr;
}


