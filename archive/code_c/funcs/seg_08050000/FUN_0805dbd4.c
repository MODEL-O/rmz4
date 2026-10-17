// undefined FUN_0805dbd4(void)
// entry 0x805dbd4


undefined4 FUN_0805dbd4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_0805dcc0,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0xb4) + DAT_0805dcc4;
    *(undefined4 *)(param_1 + 0x60) = 0xffffffe0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffe0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805dccc) * 4 +
                               DAT_0805dcc8)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805dcd0) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    iVar2 = -*(int *)(param_1 + 0x60);
    iVar1 = iVar2 + -0x20;
    if (iVar1 < 0) {
      iVar1 = iVar2 + -1;
    }
    if (*(int *)(param_1 + 0x58) +
        (((iVar1 >> 5) + 1) * (*(int *)(param_1 + 0x60) * 2 + (iVar1 >> 5) * 0x20) >> 1) <=
        *(int *)(param_1 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar2;
  if (iVar2 < DAT_0805dcd4) {
    *(int *)(param_1 + 0x60) = DAT_0805dcd4;
  }
  if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0x5c)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


