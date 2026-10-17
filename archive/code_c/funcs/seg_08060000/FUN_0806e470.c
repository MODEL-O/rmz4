// undefined FUN_0806e470(void)
// entry 0x806e470


undefined4 FUN_0806e470(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  undefined1 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0806e59c);
    iVar9 = DAT_0806e5a4;
    piVar3 = DAT_0806e5a0;
    uVar4 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*DAT_0806e5a0 + 0x54),
                         *(int *)(*DAT_0806e5a0 + 0x58) + DAT_0806e5a4);
    *(undefined1 *)(param_1 + 0xc4) = uVar4;
    *(undefined4 *)(param_1 + 100) = 0x300;
    iVar7 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*piVar3 + 0x54),*(int *)(*piVar3 + 0x58) + iVar9);
    iVar9 = DAT_0806e5a8;
    iVar7 = (((int)((iVar7 * 0x1000000 + 0xe0000000U >> 0x18) + 0x20) >> 6) * 0x40 + 0x20) *
            0x1000000;
    uVar8 = iVar7 + 0x80000000;
    iVar7 = *(int *)(param_1 + 100) * (int)*(short *)((iVar7 + 0xc0000000U >> 0x17) + DAT_0806e5a8);
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar7 >> 8;
    iVar9 = *(int *)(param_1 + 100) * (int)*(short *)((uVar8 >> 0x18) * 2 + iVar9);
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar9 >> 8;
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0x13) = (char)(uVar8 >> 0x18);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  bVar1 = 0xa000 < (*(int *)(param_1 + 0xbc) - (iVar9 + DAT_0806e5ac)) + 0x5000U;
  bVar2 = 0x5000 < (uint)((*(int *)(param_1 + 0xb8) - iVar7) + DAT_0806e5b0);
  *(int *)(param_1 + 0x54) = iVar9;
  *(int *)(param_1 + 0x58) = iVar7;
  FUN_0806f26c(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
    FUN_08002b10(0x38);
  }
  if ((char)(bVar1 + bVar2) != '\0') {
    FUN_08002b10(0x38);
    cVar5 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar5;
    if (cVar5 == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      cVar5 = *(char *)(param_1 + 0x13) + bVar1 * '\x02' * ('@' - *(char *)(param_1 + 0x13));
      bVar6 = cVar5 + bVar2 * '\x02' * (-0x80 - cVar5);
      iVar9 = *(int *)(param_1 + 100) + 0x40;
      *(int *)(param_1 + 100) = iVar9;
      if (0x700 < iVar9) {
        *(undefined4 *)(param_1 + 100) = 0x700;
      }
      iVar9 = DAT_0806e624;
      iVar7 = *(int *)(param_1 + 100) * (int)*(short *)((bVar6 + 0x40 & 0xff) * 2 + DAT_0806e624);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0xff;
      }
      *(int *)(param_1 + 0x5c) = iVar7 >> 8;
      iVar9 = *(int *)(param_1 + 100) * (int)*(short *)((uint)bVar6 * 2 + iVar9);
      if (iVar9 < 0) {
        iVar9 = iVar9 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar9 >> 8;
      *(byte *)(param_1 + 0x13) = bVar6;
    }
  }
  return in_lr;
}


