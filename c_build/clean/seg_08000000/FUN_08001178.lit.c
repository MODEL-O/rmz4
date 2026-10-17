// undefined FUN_08001178(void)
// entry 0x8001178


void FUN_08001178(void)

{
  int iVar1;
  undefined2 *puVar2;
  iVar1 = 0x03001710;
  if (((*(int *)0x04000006) < 0xa0) || ((*(int *)0x04000006) == 0xe3)) {
    puVar2 = *(undefined2 **)(0x03001710 + 0xc);
    **(undefined2 **)(0x03001710 + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
    puVar2 = *(undefined2 **)(iVar1 + 0x30);
    **(undefined2 **)(iVar1 + 0x28) = *puVar2;
    *(undefined2 **)(iVar1 + 0x30) = puVar2 + 1;
  }
  return;
}


