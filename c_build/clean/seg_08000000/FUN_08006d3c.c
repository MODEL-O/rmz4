// undefined FUN_08006d3c(void)
// entry 0x8006d3c


void FUN_08006d3c(void)

{
  int iVar1;
  ushort *puVar2;
  puVar2 = DAT_08006d78;
  iVar1 = DAT_08006d74;
  *(ushort *)(DAT_08006d74 + 0x7d8) = *(int *)DAT_08006d78 >> 8 & 0xf;
  *(ushort *)(iVar1 + 0x7da) = puVar2[3];
  *(ushort *)(iVar1 + 0x7dc) = puVar2[4];
  *(ushort *)(iVar1 + DAT_08006d7c) = puVar2[5];
  return;
}


