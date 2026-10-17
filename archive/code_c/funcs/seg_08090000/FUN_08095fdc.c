// undefined FUN_08095fdc(void)
// entry 0x8095fdc


undefined4 FUN_08095fdc(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb5) != '\0') && (*(char *)(param_1 + 0xb4) == '\0')) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096010);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08096224(param_1);
  }
  return in_lr;
}


