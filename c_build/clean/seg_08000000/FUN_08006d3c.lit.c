// undefined FUN_08006d3c(void)
// entry 0x8006d3c


void FUN_08006d3c(void)

{
  int iVar1;
  ushort *puVar2;
  puVar2 = 0x02000a00;
  iVar1 = 0x02000ab0;
  *(ushort *)(0x02000ab0 + 0x7d8) = (*(ushort *)0x02000a00) >> 8 & 0xf;
  *(ushort *)(iVar1 + 0x7da) = puVar2[3];
  *(ushort *)(iVar1 + 0x7dc) = puVar2[4];
  *(ushort *)(iVar1 + 0x000007de) = puVar2[5];
  return;
}


