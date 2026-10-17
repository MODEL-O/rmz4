// undefined FUN_0800a9d8(void)
// entry 0x800a9d8


undefined4 FUN_0800a9d8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  undefined4 local_20 [2];
  
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (*(short *)(DAT_0800aa60 + DAT_0800aa64) != 0) {
    puVar4 = (ushort *)(((uVar2 & 0xffff) >> 4) * 2 + DAT_0800aa70);
    FUN_08128be0(*DAT_0800aa68 + DAT_0800aa6c,(*puVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    local_20[0] = 0;
    FUN_08128be0(local_20,(*puVar4 & 0x1f00) * 8 + DAT_0800aa74,0x1000200);
  }
  iVar1 = DAT_0800aa78;
  iVar3 = ((uVar2 & 0xffff) >> 4) * 4;
  *(short *)(iVar3 + DAT_0800aa78) = (short)*(undefined4 *)(param_1 + 0x34);
  *(short *)(iVar3 + iVar1 + 2) = (short)*(undefined4 *)(param_1 + 0x38);
  return in_lr;
}


