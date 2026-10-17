// undefined FUN_08088d18(void)
// entry 0x8088d18


undefined4 FUN_08088d18(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  byte local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08129258(local_1c,DAT_08088d6c,3);
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  iVar2 = 0;
  do {
    FUN_080d4c8c(&local_18,(uint)local_1c[iVar2] * 0x1c + DAT_08088d70,0,uVar1 | uVar1 << 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return in_lr;
}


