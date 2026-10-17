// undefined FUN_08067ebc(void)
// entry 0x8067ebc


undefined4 FUN_08067ebc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *DAT_08067eec;
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08067ef0);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) + DAT_08067f48;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + 0x3b00;
    }
    *(int *)(param_1 + 100) = iVar2;
    iVar2 = *(int *)(param_1 + 0x58) + DAT_08067f4c;
    *(int *)(param_1 + 0x68) = iVar2;
    uVar4 = 1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 2;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar4;
    *(undefined1 *)(param_1 + 0x12) = 0xc4;
    uVar3 = FUN_080debc8(param_1,*(undefined4 *)(param_1 + 100),iVar2,
                         *(undefined1 *)(param_1 + 0x13),0xc4);
    *(undefined4 *)(param_1 + 200) = uVar3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(int *)(iVar7 + 0xec) == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  if (*(char *)(param_1 + 0x13) == '\x02') {
    uVar5 = 0;
    if (*(int *)(iVar7 + 0xec) < 1) goto LAB_08067f68;
LAB_08067f6c:
    iVar6 = *(int *)(param_1 + 100);
    iVar2 = *(int *)(*DAT_08067f90 + 0x54);
    if (iVar6 <= iVar2) {
      if (iVar2 - iVar6 < 0x4001) {
        iVar2 = (*(int *)(iVar7 + 0x1bc) + 0x2c0) - *(int *)(param_1 + 0x5c);
      }
      else {
        iVar2 = (*(int *)(iVar7 + 0x1bc) + 0x240) - *(int *)(param_1 + 0x5c);
      }
      goto LAB_08068030;
    }
    if (iVar6 - iVar2 < 0x4001) {
LAB_08068020:
      iVar6 = *(int *)(iVar7 + 0x1bc);
      iVar2 = DAT_08068050;
    }
    else {
      iVar6 = *(int *)(iVar7 + 0x1bc);
      iVar2 = DAT_08067f94;
    }
  }
  else {
    uVar5 = *(uint *)(iVar7 + 0xec) >> 0x1f;
LAB_08067f68:
    if (uVar5 != 0) goto LAB_08067f6c;
    iVar6 = *(int *)(param_1 + 100);
    iVar2 = *(int *)(*DAT_08067ff0 + 0x54);
    if (iVar2 < iVar6) {
      if (iVar6 - iVar2 < 0x41) {
        iVar2 = (*(int *)(iVar7 + 0x1bc) + 0x2c0) - *(int *)(param_1 + 0x5c);
      }
      else {
        iVar2 = (*(int *)(iVar7 + 0x1bc) + 0x240) - *(int *)(param_1 + 0x5c);
      }
      goto LAB_08068030;
    }
    if (iVar6 - iVar2 < 0x41) goto LAB_08068020;
    iVar6 = *(int *)(iVar7 + 0x1bc);
    iVar2 = DAT_0806801c;
  }
  iVar2 = iVar6 + iVar2 + *(int *)(param_1 + 0x5c);
LAB_08068030:
  *(int *)(iVar7 + 0x1bc) = iVar2;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x19;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


