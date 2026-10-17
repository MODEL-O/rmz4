// undefined FUN_080a0f2c(void)
// entry 0x80a0f2c


undefined4 FUN_080a0f2c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  FUN_080d0c88(2,param_1 + 0x54);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(DAT_080a0f88 + 0x26);
    if (cVar1 != '\0') {
      *(char *)(DAT_080a0f88 + 0x26) = cVar1 + -1;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a0f8c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


