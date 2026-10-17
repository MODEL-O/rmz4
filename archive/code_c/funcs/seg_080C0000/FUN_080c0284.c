// undefined FUN_080c0284(void)
// entry 0x80c0284


undefined4 FUN_080c0284(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    FUN_08002b10(0x38);
    *(char *)(param_1 + 0xb4) = '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c02d8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080c02dc(param_1);
  }
  return in_lr;
}


