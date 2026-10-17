// undefined FUN_080c3b00(void)
// entry 0x80c3b00


undefined4 FUN_080c3b00(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  FUN_0801cff0();
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\t'))
  {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = DAT_080c3b54;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0x1000;
    }
    local_10 = local_10 + iVar2;
    local_c = *(int *)(param_1 + 0x58);
    iVar2 = FUN_08008534(local_10);
    if (iVar2 - local_c < 0) {
      if (DAT_080c3b98 < local_c - iVar2) goto LAB_080c3b7c;
    }
    else if (DAT_080c3b58 < iVar2 - local_c) goto LAB_080c3b7c;
    FUN_080c3998(&local_10,0,*(char *)(param_1 + 0x11) + -1,*(byte *)(param_1 + 10) >> 4 & 1);
  }
LAB_080c3b7c:
  if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 10) {
    FUN_08005784(param_1 + 0x74,DAT_080c3b9c);
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_080c3bd4);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c3bd8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c3a60(param_1);
  }
  return in_lr;
}


