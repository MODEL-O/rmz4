// undefined FUN_080a5294(void)
// entry 0x80a5294


undefined4 FUN_080a5294(int param_1)

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
    FUN_080d4c8c(&local_20,iVar3 + DAT_080a52e0,0,uVar1 | uVar1 << 4);
    iVar3 = iVar3 + 0x1c;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return in_lr;
}


