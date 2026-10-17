// undefined FUN_08001140(void)
// entry 0x8001140


void FUN_08001140(void)

{
  int iVar1;
  undefined2 *puVar2;
  iVar1 = 0x03001734;
  if (((*(int *)0x04000006) < 0xa0) || ((*(int *)0x04000006) == 0xe3)) {
    puVar2 = *(undefined2 **)(0x03001734 + 0xc);
    **(undefined2 **)(0x03001734 + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
  }
  return;
}


