// undefined FUN_080bf088(void)
// entry 0x80bf088


/* WARNING: Removing unreachable block (ram,0x080bf172) */

undefined4 FUN_080bf088(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (*(int *)(param_1 + 0x58) - iVar3 < 1) {
      iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
      iVar3 = iVar3 - *(int *)(param_1 + 0x58);
    }
    else {
      iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54));
      iVar3 = *(int *)(param_1 + 0x58) - iVar3;
    }
    iVar4 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar7 = *(int *)(param_1 + 0x54);
    if (iVar7 - iVar4 < 1) {
      iVar4 = FUN_08008868(iVar7,*(undefined4 *)(param_1 + 0x58));
      iVar4 = iVar4 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar4 = FUN_08008868(iVar7,*(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
    }
    iVar7 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar8 = *(int *)(param_1 + 0x54);
    if (iVar8 - iVar7 < 1) {
      iVar7 = FUN_08008988(iVar8,*(undefined4 *)(param_1 + 0x58));
      iVar7 = iVar7 - *(int *)(param_1 + 0x54);
    }
    else {
      iVar7 = FUN_08008988(iVar8,*(undefined4 *)(param_1 + 0x58));
      iVar7 = *(int *)(param_1 + 0x54) - iVar7;
    }
    uVar6 = 0;
    if (iVar7 < iVar3) {
      uVar6 = 3;
      iVar3 = iVar7;
    }
    if (iVar4 < iVar3) {
      uVar6 = 2;
    }
    *(undefined1 *)(param_1 + 0xb4) = uVar6;
    FUN_0801cf00(param_1,DAT_080bf1d8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar6 = 0x20;
    if (*(char *)(param_1 + 0x11) != '\0') {
      uVar6 = 0x40;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar6;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    if (*(byte *)(param_1 + 0x12) == 0xf) {
      FUN_0801cdbc(param_1);
      FUN_0801cf00(param_1,DAT_080bf1dc);
    }
    uVar1 = (undefined2)((int)((uint)*(byte *)(param_1 + 0x12) * 0x100) >> 4);
    *(undefined2 *)(param_1 + 0x50) = uVar1;
    *(undefined2 *)(param_1 + 0x52) = uVar1;
    FUN_08005784(param_1 + 0x74,(3 - (uint)(*(byte *)(param_1 + 0x12) >> 2)) * 0x18 + DAT_080bf1e0);
  }
  FUN_0801cff0(param_1);
  FUN_080bf2ec(param_1);
  FUN_080bf494(param_1,*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bf1e4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_080befc0(param_1);
  }
  return in_lr;
}


