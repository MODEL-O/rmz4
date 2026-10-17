// undefined FUN_080d7a78(void)
// entry 0x80d7a78


undefined4 FUN_080d7a78(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (((*(byte *)(DAT_080d7ab4 + 9) & 4) == 0) || (*(char *)(param_1 + 0x78) == '\0')) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080d7ad0));
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d7ab8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


