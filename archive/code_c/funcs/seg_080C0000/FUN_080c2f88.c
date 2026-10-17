// undefined FUN_080c2f88(void)
// entry 0x80c2f88


undefined4 FUN_080c2f88(int param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x28) + 0xb5);
    *pcVar2 = *pcVar2 + -1;
  }
  FUN_080d0c88(2,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c2fdc);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


