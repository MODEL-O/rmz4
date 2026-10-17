// undefined FUN_0805df80(void)
// entry 0x805df80


undefined4 FUN_0805df80(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,0xe);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805e00c) * 4 +
                               DAT_0805e008)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805e010) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar1 = *(int *)(param_1 + 0xcc);
  if ((iVar1 != 0) && (1 < *(byte *)(iVar1 + 0xc))) {
    *(int *)(param_1 + 0xcc) = 0;
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


