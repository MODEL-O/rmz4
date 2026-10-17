// undefined FUN_080caafc(void)
// entry 0x80caafc


undefined4 FUN_080caafc(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  sVar1 = FUN_08007c7c();
  if (sVar1 != 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cab58);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_080d0cec(4,param_1 + 0x54,0,0);
    *(undefined1 *)(param_1 + 0x12) = 0xff;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


