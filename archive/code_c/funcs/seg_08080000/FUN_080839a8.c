// undefined FUN_080839a8(void)
// entry 0x80839a8


undefined4 FUN_080839a8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if ((*(byte *)(DAT_080839f0 + 9) & 4) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_08083da0(param_1);
    }
    else {
      FUN_08083e54(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080839f4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


