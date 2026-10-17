// undefined FUN_08083940(void)
// entry 0x8083940


undefined4 FUN_08083940(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_08083988 + 9) & 4) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08083adc(param_1);
    }
    else {
      FUN_08083c34(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808398c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


