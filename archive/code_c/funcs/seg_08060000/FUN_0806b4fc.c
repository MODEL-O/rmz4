// undefined FUN_0806b4fc(void)
// entry 0x806b4fc


undefined4 FUN_0806b4fc(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') goto LAB_0806b5d0;
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0806b54c) {
    FUN_0801cf00(param_1);
  }
  if (*(short *)(param_1 + 0xa4) < 0x10) {
    uVar3 = *DAT_0806b550 * DAT_0806b554 + DAT_0806b558;
    *DAT_0806b550 = uVar3 & 0x7fffffff;
    if (((uVar3 & 0x7fffffff) >> 0x10 & 0x1f) < 0x14) {
      uVar1 = 0x18;
    }
    else {
      uVar1 = 0xc;
    }
  }
  else if (*(short *)(param_1 + 0xa4) < 0x20) {
    uVar3 = *DAT_0806b584 * DAT_0806b588 + DAT_0806b58c;
    *DAT_0806b584 = uVar3 & 0x7fffffff;
    if (((uVar3 & 0x7fffffff) >> 0x10 & 0x1f) < 0x14) {
      uVar1 = 0x1e;
    }
    else {
LAB_0806b5bc:
      uVar1 = 0x10;
    }
  }
  else {
    uVar3 = *DAT_0806b5b0 * DAT_0806b5b4 + DAT_0806b5b8;
    *DAT_0806b5b0 = uVar3 & 0x7fffffff;
    if (0x17 < ((uVar3 & 0x7fffffff) >> 0x10 & 0x1f)) goto LAB_0806b5bc;
    uVar1 = 0x28;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  FUN_08005784(param_1 + 0x74,DAT_0806b5f4);
LAB_0806b5d0:
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


