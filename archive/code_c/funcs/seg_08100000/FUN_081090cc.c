// undefined FUN_081090cc(void)
// entry 0x81090cc


undefined4 FUN_081090cc(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)param_3;
  FUN_08005440(param_1,8,param_2,0xc4,iVar4);
  pcVar1 = DAT_08109134;
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      *(char *)((short)uVar3 * 0xc4 + param_2 + 0x1c) = *pcVar1 + (char)uVar3;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < iVar4);
  }
  *DAT_08109134 = *DAT_08109134 + (char)param_3;
  *DAT_08109138 = param_1;
  return in_lr;
}


