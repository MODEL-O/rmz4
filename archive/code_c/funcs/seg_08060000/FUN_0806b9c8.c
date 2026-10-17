// undefined FUN_0806b9c8(void)
// entry 0x806b9c8


undefined4 FUN_0806b9c8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806ba00);
    FUN_08002b10(200);
    *(undefined1 *)(param_1 + 0xd8) = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = DAT_0806ba1c;
      uVar3 = DAT_0806ba20;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar3 = 0x1800;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0x68) = 0x50;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x01'))
    goto LAB_0806ba46;
    FUN_08005784(param_1 + 0x74,DAT_0806ba68);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0806ba46:
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar7 = *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x54) = iVar6;
    if (iVar7 < 1) {
      iVar4 = *(int *)(param_1 + 200) - *(int *)(param_1 + 100);
      if (iVar6 < iVar4) {
        *(int *)(param_1 + 0x54) = iVar4;
        *(int *)(param_1 + 0x5c) = -iVar7;
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x60) = DAT_0806bb2c;
        FUN_08002b10(0xc9);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0xcc) - *(int *)(param_1 + 100);
      if (iVar4 < iVar6) {
        *(int *)(param_1 + 0x54) = iVar4;
        *(int *)(param_1 + 0x5c) = -iVar7;
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x60) = DAT_0806baa4;
        FUN_08002b10(0xc9);
      }
    }
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0xb8) < iVar6) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x60) = DAT_0806bb2c;
      FUN_08002b10(0xc9);
      bVar2 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar2;
      if ((5 < bVar2) ||
         (bVar2 = *(byte *)(param_1 + 0x13), uVar5 = *DAT_0806bb30 * DAT_0806bb34 + DAT_0806bb38,
         *DAT_0806bb30 = uVar5 & 0x7fffffff,
         (5 - (uint)bVar2) * 8 < ((uVar5 & 0x7fffffff) >> 0x10 & 0x1f))) {
        *(undefined1 *)(param_1 + 0xd) = 0xc;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}


