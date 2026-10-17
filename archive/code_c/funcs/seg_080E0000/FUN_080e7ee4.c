// undefined FUN_080e7ee4(void)
// entry 0x80e7ee4


undefined4 FUN_080e7ee4(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e7f60 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
  iVar3 = DAT_080e7f64;
  sVar1 = *(short *)(DAT_080e7f64 + 0xf6);
  *(int *)(param_1 + 0x5c) = sVar1 * 6;
  sVar2 = *(short *)(iVar3 + 0x76);
  *(int *)(param_1 + 0x60) = sVar2 * 6;
  iVar3 = sVar2 * -0x600;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar3 >> 8;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar3 = sVar1 * -0x600;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


