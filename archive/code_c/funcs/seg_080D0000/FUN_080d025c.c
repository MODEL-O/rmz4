// undefined FUN_080d025c(void)
// entry 0x80d025c


undefined4 FUN_080d025c(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + DAT_080d027c;
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 0x13) = 0x24;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
LAB_080d02be:
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 == '\0') {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d02e4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080d0340(param_1);
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      if (iVar5 <= *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x58) = iVar5;
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) goto LAB_080d02be;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int *)(param_1 + 0x60) < 0) goto LAB_080d032a;
    FUN_0801cf00(param_1,DAT_080d0304);
  }
  else {
    if ((*(char *)(param_1 + 0xd) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
    goto LAB_080d032a;
    FUN_0801cf00(param_1,DAT_080d0338);
    FUN_08005784(param_1 + 0x74,DAT_080d033c);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080d032a:
  FUN_0801cff0(param_1);
  return in_lr;
}


