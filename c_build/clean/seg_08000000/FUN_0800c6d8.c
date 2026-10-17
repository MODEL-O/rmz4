// undefined FUN_0800c6d8(void)
// entry 0x800c6d8


void FUN_0800c6d8(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_10;
  uint local_c;
  
  uVar1 = (param_1 & 0xfffffff) >> 0xc;
  iVar2 = (param_2 << 4) >> 0x10;
  local_10 = (iVar2 + 0x5a) * 0x10000 | uVar1;
  local_c = (local_c & DAT_0800c718 | 1) & DAT_0800c71c | 0x10000;
  FUN_0800736c((int)(short)uVar1,iVar2,&local_10);
  return;
}


