// undefined FUN_080bf1e8(void)
// entry 0x80bf1e8


undefined4 FUN_080bf1e8(int param_1)

{
  short sVar1;
  int *piVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar3 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar3 = '\x01';
    }
    *(int *)(param_1 + 0x5c) = cVar3 * 0x240;
    *(undefined4 *)(param_1 + 0x60) = 0x240;
    FUN_0801cf00(param_1,DAT_080bf27c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_08007c7c();
  if (sVar1 != 0) {
    FUN_080bee30(param_1 + 0x54,param_1 + 0x5c,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0x11));
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bf280);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080befc0(param_1);
  }
  return in_lr;
}


