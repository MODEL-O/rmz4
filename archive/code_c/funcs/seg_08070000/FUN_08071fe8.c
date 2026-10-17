// undefined FUN_08071fe8(void)
// entry 0x8071fe8


undefined4 FUN_08071fe8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,0xe);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0807208c) * 4 +
                               DAT_08072088)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08072090))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar1 = FUN_080737e8(param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar1;
      if (0x700 < iVar1) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      FUN_080739cc(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x60)) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(short *)(param_1 + 0x12) == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


