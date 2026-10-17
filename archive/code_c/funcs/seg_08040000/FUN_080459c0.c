// undefined FUN_080459c0(void)
// entry 0x80459c0


undefined4 FUN_080459c0(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045a2c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    FUN_0801cfc8(param_1,DAT_08045a30,
                 (uint)((int)((uint)(*(byte *)(iVar4 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
                 (short)*(char *)(iVar4 + 0x72));
    bVar3 = ~(*(byte *)(iVar4 + 10) >> 4) & 1;
    if (bVar3 != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08045a72;
    }
  }
  else {
    FUN_0801cfc8(param_1,DAT_08045a68,
                 (uint)((int)((uint)(*(byte *)(iVar4 + 0x71) ^ 1) << 0x18) >> 8) >> 0x10,
                 (short)*(char *)(iVar4 + 0x72));
    bVar1 = *(byte *)(iVar4 + 10) >> 4;
    bVar3 = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
      goto LAB_08045a72;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) & 0xef;
LAB_08045a72:
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(int *)(param_1 + 0xbc) = *(int *)(iVar4 + 0xb4) - *(int *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar4 + 0xb8);
  FUN_0801cff0(param_1);
  FUN_08045864(param_1);
  return in_lr;
}


