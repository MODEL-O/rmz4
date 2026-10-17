// undefined FUN_080a318c(void)
// entry 0x80a318c


undefined4 FUN_080a318c(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *DAT_080a31e8 * DAT_080a31ec + DAT_080a31f0;
  *DAT_080a31e8 = uVar1 & 0x7fffffff;
  uVar1 = ((uVar1 & 0x7fffffff) >> 0x10 & 1) + 1;
  do {
    FUN_080d4c8c(&local_14,(uVar1 & 1) * 0x1c + DAT_080a31f4,0,uVar2 | uVar2 << 4);
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  return in_lr;
}


