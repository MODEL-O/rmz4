// undefined FUN_080d0b78(void)
// entry 0x80d0b78


undefined4 FUN_080d0b78(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)param_3;
  FUN_08005440(param_1,5,param_2,0x84,iVar4);
  pcVar1 = DAT_080d0bd8;
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      *(char *)((short)uVar3 * 0x84 + param_2 + 0x1c) = *pcVar1 + (char)uVar3;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < iVar4);
  }
  *DAT_080d0bd8 = *DAT_080d0bd8 + (char)param_3;
  *DAT_080d0bdc = param_1;
  return in_lr;
}


