// undefined FUN_080ed204(void)
// entry 0x80ed204


undefined4 FUN_080ed204(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xbc);
  FUN_0801cff0();
  iVar3 = *(int *)(param_1 + 0x58);
  if (((*(int *)(param_1 + 0xbc) == 0) || (*(char *)(iVar2 + 0xd) != '\x03')) ||
     (*(byte *)(iVar2 + 0xe) < 2)) {
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    }
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
      iVar2 = *(int *)(param_1 + 0x58) + DAT_080ed2ac;
      goto LAB_080ed27a;
    }
LAB_080ed284:
    iVar2 = *(int *)(param_1 + 0xb8) + DAT_080ed2b0;
    if (iVar2 <= *(int *)(param_1 + 0x58)) goto LAB_080ed292;
  }
  else {
    if ((*(uint *)(iVar2 + 600) & 0x40) != 0) {
      *(int *)(param_1 + 0x58) = iVar3 + DAT_080ed254;
    }
    if ((*(uint *)(iVar2 + 600) & 0x80) != 0) {
      iVar2 = *(int *)(param_1 + 0x58) + 0x200;
LAB_080ed27a:
      *(int *)(param_1 + 0x58) = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0xb8);
    if (*(int *)(param_1 + 0x58) <= iVar2) goto LAB_080ed284;
  }
  *(int *)(param_1 + 0x58) = iVar2;
LAB_080ed292:
  if (iVar3 == *(int *)(param_1 + 0x58)) {
    if (*(short *)(param_1 + 0xc0) == 0) {
      return in_lr;
    }
    FUN_08002b5c(0x77);
    FUN_08002b10(DAT_080ed2d4);
    uVar1 = 0;
  }
  else {
    if (*(short *)(param_1 + 0xc0) != 0) {
      return in_lr;
    }
    FUN_08002b10(0x77);
    uVar1 = 0x77;
  }
  *(undefined2 *)(param_1 + 0xc0) = uVar1;
  return in_lr;
}


