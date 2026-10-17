// undefined FUN_080a9218(void)
// entry 0x80a9218


undefined4 FUN_080a9218(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = DAT_080a93ac;
  puVar2 = DAT_080a93a4;
  iVar4 = DAT_080a93a0;
  iVar5 = DAT_080a92dc;
  puVar1 = DAT_080a92d4;
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_080a92d0) {
      iVar9 = param_1 + 0x54;
      uVar7 = DAT_080a92d8 * *DAT_080a92d4 + DAT_080a92dc;
      *DAT_080a92d4 = uVar7 & 0x7fffffff;
      pbVar8 = (byte *)(param_1 + 0xbc);
      FUN_080d4c8c(iVar9,DAT_080a92e0,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
      iVar4 = DAT_080a92e0 + 0x1c;
      uVar7 = DAT_080a92d8 * *puVar1 + iVar5;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(iVar9,iVar4,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
      iVar4 = DAT_080a92e0 + 0x38;
      uVar7 = DAT_080a92d8 * *puVar1 + iVar5;
      *puVar1 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(iVar9,iVar4,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
    }
    else {
      iVar5 = param_1 + 0x54;
      uVar7 = DAT_080a93a8 * *DAT_080a93a4 + DAT_080a93ac;
      *DAT_080a93a4 = uVar7 & 0x7fffffff;
      pbVar8 = (byte *)(param_1 + 0xbc);
      FUN_080d4c8c(iVar5,iVar4,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
      uVar7 = DAT_080a93a8 * *puVar2 + iVar9;
      *puVar2 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(iVar5,iVar4 + 0x1c,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
      uVar7 = DAT_080a93a8 * *puVar2 + iVar9;
      *puVar2 = uVar7 & 0x7fffffff;
      FUN_080d4c8c(iVar5,iVar4 + 0x38,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar8);
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      FUN_080d0dc4(0,param_1 + 0x54,0x200,*(undefined1 *)(param_1 + 0xbc));
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    pcVar6 = (char *)(iVar3 + 0xe3);
    *pcVar6 = *pcVar6 + -1;
    *(undefined1 *)(iVar3 + 0xcc + (uint)*(byte *)(param_1 + 0x10)) = 1;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a9404));
  return in_lr;
}


