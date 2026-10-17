// undefined FUN_080013b0(void)
// entry 0x80013b0


void FUN_080013b0(undefined4 param_1)

{
  int iVar1;
  iVar1 = *(int *)(DAT_080013d8 + DAT_080013dc) * 0x18 + DAT_080013d8 + DAT_080013e0;
  *(undefined1 *)(iVar1 + 1) = 1;
  *(undefined4 *)(iVar1 + 4) = param_1;
  FUN_08000328(*(int *)DAT_080013e4);
  return;
}


