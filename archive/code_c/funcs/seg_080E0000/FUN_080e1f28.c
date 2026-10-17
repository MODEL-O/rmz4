// undefined FUN_080e1f28(void)
// entry 0x80e1f28


undefined4 FUN_080e1f28(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar2 = FUN_08007c7c();
    if (sVar2 != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1f98);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080e1dac(param_1);
  }
  return in_lr;
}


