// undefined FUN_08001140(void)
// entry 0x8001140


void FUN_08001140(void)

{
  int iVar1;
  undefined2 *puVar2;
  iVar1 = DAT_08001174;
  if ((*(int *)DAT_08001170 < 0xa0) || (*(int *)DAT_08001170 == 0xe3)) {
    puVar2 = *(undefined2 **)(DAT_08001174 + 0xc);
    **(undefined2 **)(DAT_08001174 + 4) = *puVar2;
    *(undefined2 **)(iVar1 + 0xc) = puVar2 + 1;
  }
  return;
}


