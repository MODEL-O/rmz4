// undefined FUN_08094e38(void)
// entry 0x8094e38


undefined4 FUN_08094e38(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + DAT_08094e64;
  uStack_4 = in_lr;
  FUN_080d4c8c(&local_c,DAT_08094e68,0,uVar1 | uVar1 << 4);
  return uStack_4;
}


