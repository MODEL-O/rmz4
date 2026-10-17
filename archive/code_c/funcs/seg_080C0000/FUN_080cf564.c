// undefined FUN_080cf564(void)
// entry 0x80cf564


undefined4 FUN_080cf564(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x132);
    iVar4 = FUN_0807e980(iVar3,(uint)bVar1);
    *(int *)(param_1 + 100) = iVar4;
    iVar6 = *(int *)(iVar3 + 0xb8) + DAT_080cf698;
    *(int *)(param_1 + 0x68) = iVar6;
    iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    iVar6 = iVar6 - *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x5c) = iVar4;
    *(int *)(param_1 + 0x60) = iVar6;
    uVar2 = FUN_08128bf4(iVar4 * iVar4 + iVar6 * iVar6);
    iVar4 = FUN_08128fb8(uVar2,0x340);
    iVar6 = FUN_08129050(uVar2,0x340);
    if (iVar6 != 0) {
      iVar4 = iVar4 + 1;
    }
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0xb8) = iVar4;
    *(int *)(param_1 + 0xb4) = iVar4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar7 = (int *)(param_1 + 0xb4);
  iVar4 = *piVar7;
  *piVar7 = iVar4 + -1;
  iVar4 = FUN_08128fb8(*(int *)(param_1 + 0x5c) * (iVar4 + -1),*(undefined4 *)(param_1 + 0xb8));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100) - iVar4;
  iVar4 = FUN_08128fb8(*(int *)(param_1 + 0x60) * *piVar7,*(undefined4 *)(param_1 + 0xb8));
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68) - iVar4;
  if ((((int)(uint)*(byte *)(iVar3 + 0xce) >> (uint)bVar1 & 1U) != 0) && (*piVar7 == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  uVar5 = FUN_0801fb14(DAT_080cf69c,param_1 + 0x54);
  if (0x1000 < uVar5) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf6a0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 0xc);
  }
  return in_lr;
}


