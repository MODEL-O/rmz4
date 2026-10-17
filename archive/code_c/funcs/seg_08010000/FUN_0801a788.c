// undefined FUN_0801a788(void)
// entry 0x801a788


undefined4 FUN_0801a788(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  uint local_1c;
  uint local_18;
  
  uVar3 = (uint)((ushort *)(DAT_0801a814 + 0x7e0))
                [(param_2 >> 0xc) * (uint)*(ushort *)(DAT_0801a814 + 0x7e0) + (param_1 >> 0xc) + 2];
  uVar1 = FUN_08129198(uVar3);
  iVar4 = (param_1 >> 0xc) - (uVar1 & 0xffff);
  iVar2 = FUN_08128fb8(uVar3 + DAT_0801a818,3);
  iVar2 = (param_2 >> 0xc) - iVar2;
  local_1c = iVar4 - 0x2dU & 0xffff | iVar2 * 0x10000;
  local_18 = (local_18 & DAT_0801a81c | 3) & DAT_0801a820 | 0x30000;
  FUN_0800736c(iVar4,iVar2,&local_1c);
  FUN_08103888(0,iVar4 * 0x1000,iVar2 * 0x1000);
  return in_lr;
}


