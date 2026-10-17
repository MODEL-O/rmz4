// undefined FUN_08011604(void)
// entry 0x8011604


undefined4 FUN_08011604(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(ushort *)(param_1 + 0x10) < 0x20) {
    uVar1 = *(ushort *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0x10) = (short)uVar1;
    *(ushort *)(DAT_0801162c + 2) = (ushort)((uVar1 & 0xffff) >> 4) & 0x1f | 0x1000;
  }
  return in_lr;
}


