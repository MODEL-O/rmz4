// undefined FUN_08063330(void)
// entry 0x8063330


undefined4 FUN_08063330(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x106);
    FUN_08065a94(param_1,9);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = (int)*(char *)(param_1 + 0x71);
  FUN_08005784(param_1 + 0x74,
               *(int *)(iVar1 * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063408) * 4 +
                               DAT_08063404)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_0806340c))
                              + iVar1) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && ('\x02' < *(char *)(param_1 + 0x71))) {
    local_20 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0x4000;
    local_1c = *(int *)(param_1 + 0x58) + DAT_08063410;
    iVar1 = FUN_0809b734(param_1,&local_20,0,uVar2);
    *(int *)(param_1 + 0xc4) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      goto LAB_08063422;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    return in_lr;
  }
  *(undefined1 *)(param_1 + 0xe) = 3;
LAB_08063422:
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


