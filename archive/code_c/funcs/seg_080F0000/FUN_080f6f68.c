// undefined FUN_080f6f68(void)
// entry 0x80f6f68


undefined4 FUN_080f6f68(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\0') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f6f90);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080f7408(param_1);
  }
  return in_lr;
}


