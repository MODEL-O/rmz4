// undefined FUN_080b0f78(void)
// entry 0x80b0f78


undefined4 FUN_080b0f78(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080b0fc0);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b0fc4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b0fe4(param_1);
  }
  else {
    FUN_0801d134(param_1);
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    FUN_080b1004(param_1);
  }
  return in_lr;
}


