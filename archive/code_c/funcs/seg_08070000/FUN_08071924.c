// undefined FUN_08071924(void)
// entry 0x8071924


undefined4 FUN_08071924(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (DAT_080719c8 < *(int *)(param_1 + 0x60))) {
    FUN_080736c4(param_1,10);
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_080719d0) * 4 +
                               DAT_080719cc)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_080719d4))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar1 = FUN_08073850(param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar1;
    if (0x300 < iVar1) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
  }
  else {
    FUN_08073a68(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


