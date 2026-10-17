// undefined FUN_080cda8c(void)
// entry 0x80cda8c


void FUN_080cda8c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cdaa0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


