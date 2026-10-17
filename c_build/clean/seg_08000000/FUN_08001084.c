// undefined FUN_08001084(void)
// entry 0x8001084


void FUN_08001084(void)

{
  int iVar1;
  short sVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  iVar1 = DAT_08001104;
  if ((*(int *)DAT_08001100 < 0xa0) || (*(int *)DAT_08001100 == 0xe3)) {
    puVar3 = *(undefined2 **)(DAT_08001104 + 0xc);
    puVar4 = *(undefined2 **)(DAT_08001104 + 4);
    for (sVar2 = *(short *)(DAT_08001104 + 0x20); sVar2 != 0; sVar2 = sVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + *(short *)(iVar1 + 0x1e);
      puVar3 = puVar3 + *(short *)(iVar1 + 0x1c);
    }
    *(undefined2 **)(iVar1 + 0xc) = puVar3;
    puVar3 = *(undefined2 **)(iVar1 + 0x30);
    puVar4 = *(undefined2 **)(iVar1 + 0x28);
    for (sVar2 = *(short *)(iVar1 + 0x44); sVar2 != 0; sVar2 = sVar2 + -1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + *(short *)(iVar1 + 0x42);
      puVar3 = puVar3 + *(short *)(iVar1 + 0x40);
    }
    *(undefined2 **)(iVar1 + 0x30) = puVar3;
  }
  return;
}


