// undefined FUN_0807f87c(void)
// entry 0x807f87c


undefined4 FUN_0807f87c(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)param_3;
  FUN_08005440(param_1,3,param_2,0xc4,iVar4);
  pcVar1 = DAT_0807f8e4;
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      *(char *)((short)uVar3 * 0xc4 + param_2 + 0x1c) = *pcVar1 + (char)uVar3;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < iVar4);
  }
  *DAT_0807f8e4 = *DAT_0807f8e4 + (char)param_3;
  *DAT_0807f8e8 = param_1;
  return in_lr;
}


