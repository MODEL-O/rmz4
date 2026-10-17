// undefined FUN_080027b8(void)
// entry 0x80027b8


undefined4 FUN_080027b8(int param_1,int param_2,uint param_3,char param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  undefined4 in_lr;
  
  uVar2 = DAT_0800281c;
  param_1 = param_1 + (((param_5 << 0x18) >> 0x13) + (int)param_4) * 2;
  iVar3 = (param_3 & 0xff) * 4;
  iVar3 = param_2 + *(int *)(iVar3 + param_2) + iVar3;
  uVar1 = *(ushort *)(iVar3 + 4);
  sVar4 = *(short *)(iVar3 + 6);
  iVar3 = iVar3 + 8;
  if (sVar4 != 0) {
    do {
      FUN_08128be4(iVar3,param_1,uVar1 & uVar2);
      sVar4 = sVar4 + -1;
      iVar3 = iVar3 + (uint)uVar1 * 2;
      param_1 = param_1 + 0x40;
    } while (sVar4 != 0);
  }
  return in_lr;
}


