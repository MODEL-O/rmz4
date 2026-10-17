// undefined FUN_080fbacc(void)
// entry 0x80fbacc


undefined4 FUN_080fbacc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xbd) == '\0') {
    FUN_08002624(0xac);
  }
  else {
    FUN_08002624(0x36);
    *(char *)(param_1 + 0xbd) = '\0';
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fbb04);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


