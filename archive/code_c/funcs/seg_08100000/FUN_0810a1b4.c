// undefined FUN_0810a1b4(void)
// entry 0x810a1b4


undefined4 FUN_0810a1b4(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)param_3;
  FUN_08005440(param_1,9,param_2,0x84,iVar4);
  pcVar1 = DAT_0810a214;
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      *(char *)((short)uVar3 * 0x84 + param_2 + 0x1c) = *pcVar1 + (char)uVar3;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < iVar4);
  }
  *DAT_0810a214 = *DAT_0810a214 + (char)param_3;
  *DAT_0810a218 = param_1;
  return in_lr;
}


