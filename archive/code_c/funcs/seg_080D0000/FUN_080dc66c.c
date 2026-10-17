// undefined FUN_080dc66c(void)
// entry 0x80dc66c


undefined4 FUN_080dc66c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(DAT_080dc6a8 + 9) & 4) == 0) || (*(char *)(param_1 + 0x78) == '\0')) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080dc6c4));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dc6ac);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


