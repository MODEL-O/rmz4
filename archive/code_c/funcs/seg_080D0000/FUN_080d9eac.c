// undefined FUN_080d9eac(void)
// entry 0x80d9eac


undefined4 FUN_080d9eac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *DAT_080d9f0c * DAT_080d9f10 + DAT_080d9f14;
  *DAT_080d9f0c = uVar1 & 0x7fffffff;
  iVar3 = ((uVar1 & 0x7fffffff) >> 0x10 & 1) + 2;
  if (iVar3 != 0) {
    do {
      iVar2 = FUN_08129050(iVar3,3);
      FUN_080d4c8c(&local_14,iVar2 * 0x1c + DAT_080d9f18,0,uVar4 | uVar4 << 4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return in_lr;
}


