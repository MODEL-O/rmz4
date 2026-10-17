// undefined FUN_08000fd4(void)
// entry 0x8000fd4


void FUN_08000fd4(void)

{
  int iVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  iVar1 = DAT_08001028;
  if ((*(int *)DAT_08001024 < 0xa0) || (*(int *)DAT_08001024 == 0xe3)) {
    puVar3 = *(undefined2 **)(DAT_08001028 + 0xc);
    puVar4 = *(undefined2 **)(DAT_08001028 + 4);
    for (sVar2 = *(short *)(DAT_08001028 + 0x20); sVar2 != 0; sVar2 = sVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + *(short *)(iVar1 + 0x1e);
      puVar3 = puVar3 + *(short *)(iVar1 + 0x1c);
    }
    *(undefined2 **)(iVar1 + 0xc) = puVar3;
  }
  return;
}


