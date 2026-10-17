// undefined FUN_080e82b4(void)
// entry 0x80e82b4


undefined4 FUN_080e82b4(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -4;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + '\x04';
  }
  *(char *)(param_1 + 0x12) = cVar1;
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e830c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


