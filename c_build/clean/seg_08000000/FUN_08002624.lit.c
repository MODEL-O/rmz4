// undefined FUN_08002624(void)
// entry 0x8002624


void FUN_08002624(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  iVar3 = 0;
  uVar1 = (*(ushort *)0x020008a0);
  puVar2 = 0x020008a0;
  while ((uint)uVar1 != param_1 * 0x10000 + 0x10000U >> 0x10) {
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) break;
    uVar1 = *puVar2;
  }
  if (iVar3 != 0x10) {
    ((ushort *)0x020008a0)[iVar3] = 0;
  }
  return;
}


