// undefined FUN_080e57e8(void)
// entry 0x80e57e8


undefined4 FUN_080e57e8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined2 auStack_c [2];
  
  FUN_08129258(auStack_c,DAT_080e5878,4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080e56d0(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0xfffffff4;
  }
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e587c + 0x54)) {
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
  FUN_0801cf00(param_1,auStack_c[*(byte *)(param_1 + 0x11)]);
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


