// undefined FUN_080013b0(void)
// entry 0x80013b0


void FUN_080013b0(undefined4 param_1)

{
  int iVar1;
  iVar1 = *(int *)(0x03001760 + 0x00001350) * 0x18 + 0x03001760 + 0x00001308;
  *(undefined1 *)(iVar1 + 1) = 1;
  *(undefined4 *)(iVar1 + 4) = param_1;
  FUN_08000328((*(int *)0x02000000));
  return;
}


