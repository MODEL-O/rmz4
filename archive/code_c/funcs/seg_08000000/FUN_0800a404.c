// undefined FUN_0800a404(void)
// entry 0x800a404


undefined4 FUN_0800a404(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_18;
  uint local_14;
  
  uVar1 = DAT_0800a458;
  iVar3 = ((param_1 >> 0xc) + -1) * 0x10000;
  uVar4 = ((param_2 >> 0xc) + -1) * 0x10000;
  local_18 = iVar3 + 0x780000U >> 0x10 | uVar4;
  local_14 = DAT_0800a45c;
  sVar2 = FUN_0800a3c4(param_1,param_2 + 0x3000);
  if (sVar2 == 0) {
    local_14 = local_14 & uVar1 | 0x30000;
  }
  FUN_0800736c(iVar3 >> 0x10,(int)uVar4 >> 0x10,&local_18);
  return in_lr;
}


