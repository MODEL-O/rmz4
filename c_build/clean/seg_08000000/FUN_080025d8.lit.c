// undefined FUN_080025d8(void)
// entry 0x80025d8


undefined4 FUN_080025d8(int param_1)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  iVar2 = 0;
  puVar3 = 0x020008a0;
  do {
    if ((uint)*puVar3 == param_1 * 0x10000 + 0x10000U >> 0x10) break;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  if (iVar2 == 0x10) {
    uVar1 = 3;
  }
  else {
    iVar2 = iVar2 * 0x14 + 0x020008c0;
    FUN_08003518(iVar2 + 8);
    uVar1 = (uint)*(byte *)(iVar2 + 0xf);
  }
  return uVar1;
}


