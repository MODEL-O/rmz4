// undefined FUN_0802b400(void)
// entry 0x802b400


undefined4 FUN_0802b400(undefined4 param_1,int param_2,short param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = (int)param_3;
  FUN_08005440(param_1,0,param_2,0x2d0,iVar4);
  pcVar1 = DAT_0802b46c;
  uVar3 = 0;
  if (0 < iVar4) {
    do {
      *(char *)((short)uVar3 * 0x2d0 + param_2 + 0x1c) = *pcVar1 + (char)uVar3;
      uVar2 = (int)(short)uVar3 + 1;
      uVar3 = uVar2 & 0xffff;
    } while ((int)(uVar2 * 0x10000) >> 0x10 < iVar4);
  }
  *DAT_0802b46c = *DAT_0802b46c + (char)param_3;
  *DAT_0802b470 = param_1;
  *DAT_0802b474 = param_2;
  return in_lr;
}


