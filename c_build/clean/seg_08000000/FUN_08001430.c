// undefined FUN_08001430(void)
// entry 0x8001430


void FUN_08001430(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x10);
  do {
    *(undefined1 *)(param_1 + 0xc + iVar2) = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


