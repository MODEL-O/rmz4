// undefined FUN_0801a728(void)
// entry 0x801a728


undefined8 FUN_0801a728(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  if (DAT_0801a740 < (uint)(param_2 + DAT_0801a73c)) {
    uVar1 = 0;
  }
  else {
    puVar3 = (ushort *)(DAT_0801a780 + 0x7e0);
    iVar2 = (param_2 >> 0xc) * (uint)*puVar3;
    uVar1 = -(uint)(puVar3[iVar2 + (param_1 >> 0xc) + 2] ^
                   puVar3[iVar2 + (param_1 + DAT_0801a784 >> 0xc) + 2]) >> 0x1f;
  }
  return CONCAT44(in_lr,uVar1);
}


