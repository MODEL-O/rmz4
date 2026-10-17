// undefined FUN_0800a404(void)
// entry 0x800a404


void FUN_0800a404(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint local_18;
  uint local_14;
  
  uVar1 = 0x0000ffff;
  iVar3 = ((param_1 >> 0xc) + -1) * 0x10000;
  uVar4 = ((param_2 >> 0xc) + -1) * 0x10000;
  local_18 = iVar3 + 0x780000U >> 0x10 | uVar4;
  local_14 = 0x00020002;
  sVar2 = FUN_0800a3c4(param_1,param_2 + 0x3000);
  if (sVar2 == 0) {
    local_14 = local_14 & uVar1 | 0x30000;
  }
  FUN_0800736c(iVar3 >> 0x10,(int)uVar4 >> 0x10,&local_18);
  return;
}


