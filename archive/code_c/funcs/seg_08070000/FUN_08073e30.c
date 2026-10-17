// undefined FUN_08073e30(void)
// entry 0x8073e30


undefined8 FUN_08073e30(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  byte abStack_1d [17];
  
  uVar6 = 0;
  iVar4 = 0;
  if ((param_2 & 0xff) != 0) {
    do {
      bVar1 = *(byte *)(param_1 + iVar4);
      abStack_1d[iVar4 + 1] = bVar1;
      uVar6 = bVar1 + uVar6 & 0xff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(param_2 & 0xff));
  }
  if ((char)uVar6 == 0) {
    iVar5 = -1;
  }
  else {
    uVar2 = *DAT_08073ea4 * DAT_08073ea8 + DAT_08073eac;
    *DAT_08073ea4 = uVar2 & 0x7fffffff;
    iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,(int)(char)uVar6);
    do {
      iVar5 = iVar4 + -1;
      if (iVar5 < 0) break;
      uVar2 = uVar6 - abStack_1d[iVar4];
      uVar6 = uVar2 & 0xff;
      iVar4 = iVar5;
    } while (iVar3 < (int)(uVar2 * 0x1000000) >> 0x18);
  }
  return CONCAT44(in_lr,iVar5);
}


