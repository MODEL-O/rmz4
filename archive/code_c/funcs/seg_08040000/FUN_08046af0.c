// undefined FUN_08046af0(void)
// entry 0x8046af0


void FUN_08046af0(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046b20);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


