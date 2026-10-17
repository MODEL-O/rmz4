// undefined FUN_0800102c(void)
// entry 0x800102c


void FUN_0800102c(void)

{
  int iVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  iVar1 = DAT_08001080;
  if ((*(int *)DAT_0800107c < 0xa0) || (*(int *)DAT_0800107c == 0xe3)) {
    puVar3 = *(undefined2 **)(DAT_08001080 + 0xc);
    puVar4 = *(undefined2 **)(DAT_08001080 + 4);
    for (sVar2 = *(short *)(DAT_08001080 + 0x20); sVar2 != 0; sVar2 = sVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + *(short *)(iVar1 + 0x1e);
      puVar3 = puVar3 + *(short *)(iVar1 + 0x1c);
    }
    *(undefined2 **)(iVar1 + 0xc) = puVar3;
  }
  return;
}


