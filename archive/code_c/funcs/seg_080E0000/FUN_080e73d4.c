// undefined FUN_080e73d4(void)
// entry 0x80e73d4


undefined4 FUN_080e73d4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + DAT_080e7428;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    FUN_080d0dc4(0,&local_14,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_080e70d4(param_1 + 0x54,DAT_080e742c,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0xf;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar1 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
    iVar1 = *(int *)(param_1 + 100) * -0x100;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar1 >> 8;
  }
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e7480));
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


