// undefined FUN_080011cc(void)
// entry 0x80011cc


void FUN_080011cc(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  puVar2 = DAT_080011f4;
  *(undefined4 *)(DAT_080011f4 + -8) = 0;
  *(undefined4 *)(puVar2 + -4) = param_1;
  *(int *)DAT_080011f8 = 0;
  iVar1 = 2;
  do {
    *puVar2 = 1;
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0x18;
  } while (-1 < iVar1);
  return;
}


