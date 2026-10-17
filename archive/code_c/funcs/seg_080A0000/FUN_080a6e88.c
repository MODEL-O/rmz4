// undefined FUN_080a6e88(void)
// entry 0x80a6e88


undefined4 FUN_080a6e88(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(iVar9 + 0xbe) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a6ed4);
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar6 = *(undefined4 *)(*piVar5 + 0xc);
      goto LAB_080a6ffe;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080a6f2c);
    uVar6 = *(undefined4 *)(iVar9 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    iVar8 = DAT_080a6f9c;
    iVar7 = DAT_080a6f30;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           *(short *)((*(byte *)(iVar9 + 0xbd) + 0x40 & 0xff) * 2 + DAT_080a6f9c) * -0x1a;
      uVar1 = 0x12;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           *(short *)((*(byte *)(iVar9 + 0xbd) + 0x40 & 0xff) * 2 + DAT_080a6f30) * 0x1a;
      uVar1 = 0xee;
      iVar8 = iVar7;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar1;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + *(short *)((uint)*(byte *)(iVar9 + 0xbd) * 2 + iVar8) * -0x1a;
    *(undefined4 *)(param_1 + 0x60) = DAT_080a6fa0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xbd) = *(byte *)(iVar9 + 0xbd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0xbd);
  *(char *)(param_1 + 0xbd) = cVar3;
  *(char *)(param_1 + 0x24) = cVar3;
  iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar7;
  iVar9 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar9;
  if (iVar9 < 1) {
    return in_lr;
  }
  sVar4 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar7 + 0xa00);
  if (sVar4 == 0) {
    return in_lr;
  }
  FUN_080d0c88(1,param_1 + 0x54);
  FUN_08002b10(0x2a);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a7008);
  *(undefined4 *)(param_1 + 0xc) = 4;
  uVar6 = *(undefined4 *)(*piVar5 + 0x10);
LAB_080a6ffe:
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  return in_lr;
}


