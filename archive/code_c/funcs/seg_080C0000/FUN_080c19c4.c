// undefined FUN_080c19c4(void)
// entry 0x80c19c4


undefined4 FUN_080c19c4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  iVar3 = 0;
  iVar2 = 2;
  do {
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    FUN_080d4c8c(&local_20,iVar3 + DAT_080c1a10,0,uVar1 | uVar1 << 4);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}


