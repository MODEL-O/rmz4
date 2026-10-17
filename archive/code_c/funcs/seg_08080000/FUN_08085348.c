// undefined FUN_08085348(void)
// entry 0x8085348


undefined4 FUN_08085348(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(2,&local_10);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085390);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


