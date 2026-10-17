// undefined FUN_08072784(void)
// entry 0x8072784


undefined4 FUN_08072784(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  byte local_20 [4];
  int local_1c;
  undefined4 local_18;
  
  FUN_08129258(local_20,DAT_08072840,3);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x12a);
    FUN_080736c4(param_1,0x13);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08072848) * 4 +
                               DAT_08072844)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_0807284c))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = FUN_080737e8(param_1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar2;
      if (0x700 < iVar2) {
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
    iVar2 = (bVar1 >> 4 & 1) * 2;
    local_1c = *(int *)(param_1 + 0x54) + (iVar2 + -1) * 0x1000;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    iVar3 = 0;
    do {
      FUN_080cb8ec(param_1,&local_1c,
                   (uint)local_20[iVar3] + iVar2 * (0x140 - (uint)local_20[iVar3]) & 0xff);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


