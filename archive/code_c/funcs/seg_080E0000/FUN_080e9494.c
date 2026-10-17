// undefined FUN_080e9494(void)
// entry 0x80e9494


undefined4 FUN_080e9494(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e94bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


