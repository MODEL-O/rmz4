// undefined FUN_0800a460(void)
// entry 0x800a460


undefined4 FUN_0800a460(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  uint local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar1 = ((param_1 >> 0xc) + -1) * 0x10000;
  uVar2 = ((param_2 >> 0xc) + -1) * 0x10000;
  local_c = iVar1 + 0x3c0000U >> 0x10 | uVar2;
  local_8 = DAT_0800a494;
  uStack_4 = in_lr;
  FUN_0800736c(iVar1 >> 0x10,(int)uVar2 >> 0x10,&local_c);
  return uStack_4;
}


