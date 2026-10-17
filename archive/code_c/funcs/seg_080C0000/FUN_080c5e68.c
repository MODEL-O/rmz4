// undefined FUN_080c5e68(void)
// entry 0x80c5e68


undefined4 FUN_080c5e68(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(param_1 + 0xb8) != '\0')) {
    FUN_08002b5c(0x18a);
    *(char *)(param_1 + 0xb8) = '\0';
  }
  if (*(short *)(param_1 + 0xb4) == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5ec0);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  return in_lr;
}


