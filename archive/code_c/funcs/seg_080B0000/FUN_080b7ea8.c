// undefined FUN_080b7ea8(void)
// entry 0x80b7ea8


undefined4 FUN_080b7ea8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cd28(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,0xb200);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08002b10(0x59);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(iVar2 + 0xd) == '\t') {
    uVar3 = *(uint *)(param_1 + 100);
    *(uint *)(param_1 + 100) = uVar3 + 1;
    if ((uVar3 & 3) == 0) {
      FUN_080e41b8(param_1 + 0x54,3,0);
    }
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x13) = '\'' - cVar1;
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = *(int *)(param_1 + 0x54);
    iVar5 = FUN_08128fb8(*(int *)(iVar2 + 0xb4) - (DAT_080b7f98 + iVar4),
                         *(undefined1 *)(param_1 + 0x13));
    *(int *)(param_1 + 0x5c) = iVar5;
    iVar7 = *(int *)(param_1 + 0x58);
    iVar6 = FUN_08128fb8(*(int *)(iVar2 + 0xb8) - (DAT_080b7f9c + iVar7),
                         *(undefined1 *)(param_1 + 0x13));
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x54) = iVar4 + iVar5;
    *(int *)(param_1 + 0x58) = iVar6 + iVar7;
    bVar8 = cVar1 + 1;
    *(byte *)(param_1 + 0x12) = bVar8;
    if (0x27 < bVar8) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0xb4) + 0x800;
      *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0xb8) + 0x3000;
      *(undefined1 *)(param_1 + 0x12) = 0x27;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    *(char *)(param_1 + 0x24) = -*(char *)(param_1 + 0x12);
  }
  else {
    cVar1 = '\"' - *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + 0xe00;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + 0x2800;
    }
    else {
      uVar3 = *(uint *)(param_1 + 100);
      *(uint *)(param_1 + 100) = uVar3 + 1;
      if ((uVar3 & 3) == 0) {
        FUN_080e41b8(param_1 + 0x54,3,0);
      }
      iVar5 = *(int *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0x54);
      iVar4 = FUN_08128fb8(*(int *)(iVar5 + 0x54) - (DAT_080b8004 + iVar6),
                           *(undefined1 *)(param_1 + 0x13));
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar7 = *(int *)(param_1 + 0x58);
      iVar5 = FUN_08128fb8(*(int *)(iVar5 + 0x58) - (iVar7 + DAT_080b8008),
                           *(undefined1 *)(param_1 + 0x13));
      *(int *)(param_1 + 0x60) = iVar5;
      *(int *)(param_1 + 0x54) = iVar4 + iVar6;
      *(int *)(param_1 + 0x58) = iVar7 + iVar5;
    }
    bVar8 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar8;
    if (0x22 < bVar8) {
      *(undefined1 *)(param_1 + 0x12) = 0x22;
    }
    *(char *)(param_1 + 0x24) = -*(char *)(param_1 + 0x12);
    if (*(char *)(iVar2 + 0xd6) == '\0') {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


