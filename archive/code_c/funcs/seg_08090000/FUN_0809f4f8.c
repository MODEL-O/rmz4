// undefined FUN_0809f4f8(void)
// entry 0x809f4f8


undefined4 FUN_0809f4f8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0809f548));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809f530);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0809f54c(param_1);
  }
  return in_lr;
}


