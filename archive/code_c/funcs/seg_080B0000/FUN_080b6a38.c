// undefined FUN_080b6a38(void)
// entry 0x80b6a38


undefined4 FUN_080b6a38(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [2];
  
  local_1c[0] = *DAT_080b6a88;
  local_1c[1] = DAT_080b6a88[1];
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0;
  iVar3 = 3;
  do {
    FUN_080d4c8c(&local_24,local_1c[bVar1] + iVar4,0,uVar2 | uVar2 << 4);
    iVar4 = iVar4 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}


