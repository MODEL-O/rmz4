// undefined FUN_080a1c7c(void)
// entry 0x80a1c7c


undefined4 FUN_080a1c7c(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(undefined4 *)(param_1 + 0x58);
  uStack_4 = in_lr;
  FUN_080d4c8c(&local_c,DAT_080a1ca8 + 0x1c,0,uVar1 | uVar1 << 4);
  return uStack_4;
}


