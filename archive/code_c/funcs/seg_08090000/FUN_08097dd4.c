// undefined FUN_08097dd4(void)
// entry 0x8097dd4


undefined4 FUN_08097dd4(int param_1)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08097e04);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08097fc4(param_1);
    return in_lr;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if (*piVar3 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_08097e36:
      if (*piVar3 != 0) goto LAB_08097e3c;
    }
    else {
      iVar4 = FUN_0802adac(0,param_1,DAT_08097e74);
      *piVar3 = iVar4;
      if (iVar4 != 0) {
        FUN_08005784(param_1 + 0x74,DAT_08097e78);
        goto LAB_08097e36;
      }
    }
  }
  else {
LAB_08097e3c:
    iVar4 = FUN_0802b3e4(*piVar3);
    if (iVar4 == 0) {
      sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
      FUN_0801cfc8(param_1,sVar1,(short)*(char *)(param_1 + 0x71),sVar1 + 1);
      FUN_0801cff0(param_1);
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08097ed0);
    *piVar3 = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar5 = *(char *)(param_1 + 0x12) + 2;
    *(byte *)(param_1 + 0x12) = bVar5;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) +
         *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_08097ed4) * 0x14;
    if (((bVar5 & 0x7f) != 0) ||
       (cVar2 = *(char *)(param_1 + 0x13) + '\x01', *(char *)(param_1 + 0x13) = cVar2,
       cVar2 != '\x02')) goto LAB_08097fb0;
    cVar2 = '\x01';
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    FUN_08002b10(0x138);
    local_14 = *(int *)(param_1 + 0x54) + DAT_08097f3c;
    local_10 = *(int *)(param_1 + 0x58) + 0x1500;
    FUN_080c3490(&local_14,0);
    local_14 = *(int *)(param_1 + 0x54) + 0x900;
    FUN_080c3490(&local_14,1);
    FUN_0801cfc8(param_1,DAT_08097f40,(short)*(char *)(param_1 + 0x71),
                 CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)));
    *(undefined1 *)(param_1 + 0x13) = 0x40;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    cVar2 = *(char *)(param_1 + 0x13);
    if (((cVar2 == '>') || (cVar2 == ':')) || (cVar2 == '6')) {
      FUN_0801cfc8(param_1,0x8600,(short)*(char *)(param_1 + 0x71),
                   CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)));
    }
    if ((*(char *)(param_1 + 0x13) == '<') || (*(char *)(param_1 + 0x13) == '8')) {
      FUN_0801cfc8(param_1,DAT_08097fc0,(short)*(char *)(param_1 + 0x71),
                   CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)));
    }
    cVar2 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar2;
    if (cVar2 != -1) goto LAB_08097fb0;
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_08097fb0:
  FUN_0801cff0(param_1);
  return in_lr;
}


