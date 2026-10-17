// undefined FUN_080e7f68(void)
// entry 0x80e7f68


undefined4 FUN_080e7f68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e7fc8 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
  iVar1 = DAT_080e8038;
  iVar2 = DAT_080e7fcc;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar1 = *(short *)(DAT_080e7fcc + 0xec) * 0x180;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar2 = *(short *)(iVar2 + 0x88) * 0x180;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
    *(int *)(param_1 + 0x60) = iVar2;
    iVar1 = (iVar1 >> 8) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  else {
    iVar2 = *(short *)(DAT_080e8038 + 200) * 0x480;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 8;
    iVar2 = *(short *)(iVar1 + 0x48) * 0x480;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    iVar2 = iVar2 >> 8;
    *(int *)(param_1 + 0x60) = iVar2;
  }
  iVar2 = iVar2 * -0x100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return in_lr;
}


