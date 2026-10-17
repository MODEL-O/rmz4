// undefined FUN_08123100(void)
// entry 0x8123100


undefined4 FUN_08123100(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 in_lr;
  undefined4 local_28 [2];
  
  sVar9 = *(short *)(param_1 + 4);
  if (*(short *)(param_1 + 4) < 0x20) {
    sVar9 = sVar9 + 1;
    *(short *)(param_1 + 4) = sVar9;
    iVar11 = DAT_08123130;
    iVar10 = DAT_0812312c;
    *(char *)(DAT_0812312c + DAT_08123130) = (char)sVar9;
    bVar8 = 0xff;
  }
  else {
    if (*(short *)(param_1 + 4) < 0x21) goto LAB_08123158;
    *(short *)(param_1 + 4) = sVar9 + -1;
    iVar11 = DAT_081231a0;
    iVar10 = DAT_0812319c;
    bVar8 = (char)sVar9 - 0x21;
    *(byte *)(DAT_0812319c + DAT_081231a0) = bVar8;
    sVar9 = 0xff;
  }
  bVar8 = bVar8 & (byte)sVar9;
  *(byte *)(iVar10 + iVar11 + -1) = bVar8;
  *(byte *)(iVar10 + 0x400) = bVar8;
LAB_08123158:
  *(int *)(param_1 + DAT_081231a4) = *(int *)(param_1 + DAT_081231a4) + 1;
  FUN_08003470(param_1 + 0x9a0);
  *DAT_081231a8 = 0;
  local_28[0] = 0;
  FUN_08128be0(local_28,DAT_081231ac,DAT_081231b0);
  iVar10 = FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 1) * 4 + DAT_081231b4));
  if (iVar10 == 0) {
    *(undefined1 *)(param_1 + 2) = 2;
  }
  else if ((*(char *)(param_1 + DAT_0812334c + 0x18) == '\x01') &&
          ((*(ushort *)(DAT_08123350 + 4) & 8) != 0)) {
    FUN_0810e584(0xe6);
    *(undefined2 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 2) = 3;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  uVar1 = DAT_08123358;
  iVar10 = DAT_08123354;
  iVar11 = DAT_08123354 + 0x300;
  pbVar13 = (byte *)(DAT_08123354 + -2);
  bVar8 = *pbVar13;
  uVar14 = (uint)bVar8 * 0x18 & 0xffffffe0;
  FUN_08128be0(DAT_08123354,iVar11,uVar14 >> 2);
  uVar12 = (uint)bVar8 * 0x18 & 0x1f;
  if (uVar12 != 0) {
    FUN_08128be4(uVar14 + iVar10,uVar14 + iVar11,uVar12 >> 2 & uVar1 | 0x4000000);
  }
  *(byte *)(iVar10 + -1) = *pbVar13;
  *pbVar13 = 0;
  puVar2 = DAT_0812335c;
  FUN_0801c7cc(*DAT_0812335c);
  puVar3 = DAT_08123360;
  FUN_0801c7cc(*DAT_08123360);
  puVar4 = DAT_08123364;
  FUN_0801c79c(*DAT_08123364);
  FUN_080bd36c();
  puVar5 = DAT_08123368;
  FUN_0801c79c(*DAT_08123368);
  puVar6 = DAT_0812336c;
  FUN_0801c79c(*DAT_0812336c);
  FUN_080d0be0();
  FUN_0800560c();
  FUN_0801c80c(*puVar2);
  FUN_0801c80c(*puVar3);
  FUN_0801c80c(*puVar4);
  puVar7 = DAT_08123370;
  FUN_0801c80c(*DAT_08123370);
  FUN_0801c80c(*puVar5);
  FUN_0801c80c(*puVar6);
  FUN_08006c58(param_1 + DAT_08123374);
  if (*(char *)(param_1 + DAT_0812334c + 0x18) == '\x01') {
    FUN_08005650();
  }
  FUN_0801c874(*puVar2);
  FUN_0801c874(*puVar3);
  FUN_0801c874(*puVar4);
  FUN_0801c874(*puVar6);
  param_1 = param_1 + 0x9a0;
  FUN_0801ca0c(*puVar2,param_1);
  FUN_0801ca0c(*puVar3,param_1);
  FUN_0801ca0c(*puVar4,param_1);
  FUN_0803a7dc(param_1);
  FUN_0801c924(*puVar7,param_1);
  FUN_0801c924(*DAT_08123378,param_1);
  FUN_0801ca0c(*puVar6,param_1);
  FUN_0810e4cc();
  FUN_08006d2c(param_1);
  FUN_08003420(param_1);
  if ((*DAT_0812337c != '\0') && ((*(byte *)(DAT_08123380 + 1) & 2) == 0)) {
    FUN_08002b10(0x29);
  }
  *DAT_0812337c = '\0';
  return in_lr;
}


