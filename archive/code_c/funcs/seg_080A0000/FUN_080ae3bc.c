// undefined FUN_080ae3bc(void)
// entry 0x80ae3bc


undefined4 FUN_080ae3bc(int param_1)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801ce54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    FUN_0801cf00(param_1,DAT_080ae484);
    *(undefined2 *)(param_1 + 0xbc) = 0x20;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar7 = (ushort *)(param_1 + 0xbc);
  uVar1 = *puVar7;
  *puVar7 = uVar1 + 0x10;
  if (0x100 < (ushort)(uVar1 + 0x10)) {
    *puVar7 = 0x100;
  }
  *(ushort *)(param_1 + 0x50) = *puVar7;
  *(ushort *)(param_1 + 0x52) = *puVar7;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar8 = *(int *)(iVar9 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + DAT_080ae488);
    *(int *)(param_1 + 0x54) = iVar8;
    iVar6 = *(int *)(iVar9 + 0x58) + *(int *)((uint)*(byte *)(param_1 + 0x12) * 4 + DAT_080ae48c);
    *(int *)(param_1 + 0x58) = iVar6;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (4 < bVar2) {
      iVar4 = *(int *)(iVar9 + 0x54) + DAT_080ae490;
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar9 = *(int *)(iVar9 + 0x58) + DAT_080ae494;
      iVar4 = iVar4 - iVar8;
      *(int *)(param_1 + 0x5c) = iVar4;
      iVar9 = iVar9 - iVar6;
      *(int *)(param_1 + 0x60) = iVar9;
      uVar5 = FUN_08128fb8(iVar4,0x18);
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      uVar5 = FUN_08128fb8(iVar9,0x18);
      *(undefined4 *)(param_1 + 0x60) = uVar5;
      *(undefined1 *)(param_1 + 0x12) = 0x18;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar8;
    *(int *)(param_1 + 0x54) = iVar6 + (*(int *)(iVar9 + 0x54) - *(int *)(iVar9 + 0xbc));
    *(int *)(param_1 + 0x58) = iVar8 + (*(int *)(iVar9 + 0x58) - *(int *)(iVar9 + 0xc0));
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar9 + 0x54) + DAT_080ae4ec;
      *(int *)(param_1 + 0x58) = *(int *)(iVar9 + 0x58) + DAT_080ae4f0;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  return in_lr;
}


