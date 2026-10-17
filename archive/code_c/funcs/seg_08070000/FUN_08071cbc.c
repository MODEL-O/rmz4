// undefined FUN_08071cbc(void)
// entry 0x8071cbc


undefined4 FUN_08071cbc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08071da8);
    FUN_080736c4(param_1,0xc);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08071db0) * 4 +
                               DAT_08071dac)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08071db4))
                              + iVar1) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08073a68(param_1);
  if ((*(char *)(param_1 + 0x13) != '\0') && (*(char *)(param_1 + 0x71) == '\x01')) {
    local_20 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0x400;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08071db8;
    FUN_080be728(param_1,&local_20,uVar2);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


