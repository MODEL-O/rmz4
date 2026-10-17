// undefined FUN_08065060(void)
// entry 0x8065060


undefined4 FUN_08065060(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = (*(byte *)(param_1 + 10) >> 4 & 1) + 1 & 1;
    FUN_08065a94(param_1,0x12);
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08065158;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0x12) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08065160) * 4 +
                               DAT_0806515c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08065164))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x12);
  *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 100) + ((uVar2 & 2) - 1) * (uVar2 & 1) * 0x100;
  if ((uVar2 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    FUN_08065f24(param_1);
  }
  return in_lr;
}


