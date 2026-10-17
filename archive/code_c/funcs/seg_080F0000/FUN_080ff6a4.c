// undefined FUN_080ff6a4(void)
// entry 0x80ff6a4


undefined4 FUN_080ff6a4(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ff6ec);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  iVar6 = *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    if ((iVar5 == 0) || (*(char *)(iVar5 + 0xd) != '\x03')) {
      iVar5 = *(int *)(param_1 + 0x58) + DAT_080ff730;
      *(int *)(param_1 + 0x58) = iVar5;
      if (iVar5 < *(int *)(param_1 + 0xb8)) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      }
      goto LAB_080ff7d6;
    }
    FUN_08002b10(DAT_080ff714);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    cVar1 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    *(short *)(DAT_080ff770 + DAT_080ff774) = *(short *)(DAT_080ff770 + DAT_080ff774) + 2;
    if ((iVar5 != 0) && (*(char *)(iVar5 + 0xd) == '\x03')) {
      if (cVar1 == '\x01') {
        *(int *)(param_1 + 0x58) = iVar6 + 0x100;
        iVar5 = *(int *)(param_1 + 0xb8) + 0x1100;
        if (iVar5 < iVar6 + 0x100) {
          *(int *)(param_1 + 0x58) = iVar5;
          *(undefined1 *)(param_1 + 0xd) = 2;
        }
      }
      else if (cVar1 == '\x02') {
        iVar5 = iVar6 + DAT_080ff79c;
        *(int *)(param_1 + 0x58) = iVar5;
        iVar3 = *(int *)(param_1 + 0xb8) + 0x1000;
        if (iVar5 < iVar3) {
          *(int *)(param_1 + 0x58) = iVar3;
          *(undefined1 *)(param_1 + 0xd) = 3;
        }
      }
      else {
        *(int *)(param_1 + 0x58) = iVar6 + 0x100;
        iVar5 = *(int *)(param_1 + 0xb8) + 0x1000;
        if (iVar5 < iVar6 + 0x100) {
          *(int *)(param_1 + 0x58) = iVar5;
        }
      }
      *(undefined1 *)(param_1 + 0x12) = 0x20;
      goto LAB_080ff7d6;
    }
    *(undefined1 *)(param_1 + 0xd) = 1;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080ff7d6;
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0xd) = cVar1;
LAB_080ff7d6:
  iVar5 = *(int *)(param_1 + 0x58) - *(int *)(iVar7 + 0x58);
  uVar4 = DAT_080ff7ec;
  if (((DAT_080ff7e8 < iVar5) && (uVar4 = DAT_080ff800, DAT_080ff7fc < iVar5)) &&
     (uVar4 = DAT_080ff818, DAT_080ff814 < iVar5)) {
    FUN_0801cf00(param_1,DAT_080ff848);
  }
  else {
    FUN_0801cf00(param_1,uVar4);
  }
  FUN_0801cff0(param_1);
  if (iVar6 == *(int *)(param_1 + 0x58)) {
    *(undefined1 *)(param_1 + 0xbd) = 0;
  }
  else if (*(char *)(param_1 + 0xbd) == '\0') {
    FUN_08002b10(0x78);
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


