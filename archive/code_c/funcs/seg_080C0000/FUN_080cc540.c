// undefined FUN_080cc540(void)
// entry 0x80cc540


undefined4 FUN_080cc540(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = FUN_08007c7c();
    if (sVar2 != 0) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc59c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080cc0bc(param_1);
    }
  }
  return in_lr;
}


