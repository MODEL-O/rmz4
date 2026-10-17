// undefined FUN_080e2a0c(void)
// entry 0x80e2a0c


undefined4 FUN_080e2a0c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    FUN_0801cf00(param_1,DAT_080e2a34);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = DAT_080e2aa4;
    *(undefined4 *)(param_1 + 100) = 0x10;
    FUN_0801cf00(param_1,DAT_080e2aa8);
  }
  if (*(char *)(param_1 + 0x75) == '\x01') {
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
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  *(undefined4 *)(param_1 + 0x78) = 0x100;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


