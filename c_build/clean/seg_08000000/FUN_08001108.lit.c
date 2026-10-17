// undefined FUN_08001108(void)
// entry 0x8001108


void FUN_08001108(void)

{
  int iVar1;
  undefined2 *puVar2;
  iVar1 = 0x03001710;
  if (((*(int *)0x04000006) < 0xa0) || ((*(int *)0x04000006) == 0xe3)) {
    puVar2 = *(undefined2 **)(0x03001710 + 0xc);
    **(undefined2 **)(0x03001710 + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
  }
  return;
}


