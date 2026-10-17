// undefined FUN_08101728(void)
// entry 0x8101728


void FUN_08101728(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810173c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return;
}


