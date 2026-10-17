// undefined FUN_08055808(void)
// entry 0x8055808


undefined4 FUN_08055808(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08055900);
    iVar1 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8);
    *(int *)(param_1 + 0x68) = iVar1;
    uVar2 = FUN_08128fb8(iVar1 * 2,0x510);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0x12) = 0x24;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) &&
     (*(byte *)(param_1 + 0x12) < 0x19)) {
    FUN_0801cf00(param_1,DAT_08055904);
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0805590c) * 4 + DAT_08055908)) * 0x18 + DAT_08055910);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar1 = *(int *)(param_1 + 0xb8) +
          (int)((uint)*(byte *)(param_1 + 0x12) *
               (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68)) / 2;
  *(int *)(param_1 + 0xbc) = iVar1;
  *(int *)(param_1 + 0x58) =
       iVar1 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_08055914) * 2;
  if (((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x13) != '\0')) &&
     (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


