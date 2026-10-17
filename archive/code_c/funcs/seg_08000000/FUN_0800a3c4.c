// undefined FUN_0800a3c4(void)
// entry 0x800a3c4


uint FUN_0800a3c4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(DAT_0800a400 + 0x7e0);
  iVar2 = (((param_2 >> 0xc) + -1) * 0x10000 >> 0x10) * (uint)*puVar3;
  iVar1 = ((param_1 >> 0xc) + -1) * 0x10000 >> 0x10;
  return -(uint)(puVar3[iVar2 + iVar1 + 2] ^ puVar3[iVar2 + iVar1 + 0x7a]) >> 0x1f;
}


