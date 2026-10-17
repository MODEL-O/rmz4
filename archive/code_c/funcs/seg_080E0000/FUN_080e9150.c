// undefined FUN_080e9150(void)
// entry 0x80e9150


undefined4 FUN_080e9150(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e91c0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_0801cf00(param_1,*(undefined2 *)(DAT_080e91c4 + 2));
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x58) + DAT_080e91c8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x400;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1900;
    *(undefined1 *)(param_1 + 0xd) = 2;
    FUN_08002b10(DAT_080e91cc);
    FUN_080e8ebc(param_1);
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


