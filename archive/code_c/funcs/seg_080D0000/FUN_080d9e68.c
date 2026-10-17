// undefined FUN_080d9e68(void)
// entry 0x80d9e68


undefined4 FUN_080d9e68(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(2,&local_10);
  FUN_080d9eac(param_1);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9ea8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


