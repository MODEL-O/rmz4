// undefined FUN_080569c0(void)
// entry 0x80569c0


undefined4 FUN_080569c0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 *local_2c [4];
  
  local_2c[0] = &local_7c;
  local_7c = *(undefined4 *)PTR_DAT_08056bcc;
  uStack_78 = *(undefined4 *)(PTR_DAT_08056bcc + 4);
  uStack_74 = *(undefined4 *)(PTR_DAT_08056bcc + 8);
  local_70 = *(undefined4 *)(PTR_DAT_08056bcc + 0xc);
  uStack_6c = *(undefined4 *)(PTR_DAT_08056bcc + 0x10);
  uStack_68 = *(undefined4 *)(PTR_DAT_08056bcc + 0x14);
  local_64 = *(undefined4 *)(PTR_DAT_08056bcc + 0x18);
  uStack_60 = *(undefined4 *)(PTR_DAT_08056bcc + 0x1c);
  uStack_5c = *(undefined4 *)(PTR_DAT_08056bcc + 0x20);
  local_58 = *(undefined4 *)(PTR_DAT_08056bcc + 0x24);
  local_2c[1] = &local_54;
  local_54 = *(undefined4 *)PTR_DAT_08056bd0;
  uStack_50 = *(undefined4 *)(PTR_DAT_08056bd0 + 4);
  uStack_4c = *(undefined4 *)(PTR_DAT_08056bd0 + 8);
  local_48 = *(undefined4 *)(PTR_DAT_08056bd0 + 0xc);
  uStack_44 = *(undefined4 *)(PTR_DAT_08056bd0 + 0x10);
  uStack_40 = *(undefined4 *)(PTR_DAT_08056bd0 + 0x14);
  local_3c = *(undefined4 *)(PTR_DAT_08056bd0 + 0x18);
  uStack_38 = *(undefined4 *)(PTR_DAT_08056bd0 + 0x1c);
  uStack_34 = *(undefined4 *)(PTR_DAT_08056bd0 + 0x20);
  local_30 = *(undefined4 *)(PTR_DAT_08056bd0 + 0x24);
  local_2c[3] = *(undefined4 **)(PTR_DAT_08056bd4 + 4);
  local_2c[2] = *(undefined4 **)PTR_DAT_08056bd4;
  bVar1 = *(byte *)(param_1 + 10);
  puVar2 = &local_7c;
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = FUN_0805977c(param_1);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 100) = 0x20;
    *(uint *)(param_1 + 0x68) = (uint)*(ushort *)(iVar3 * 2 + DAT_08056bd8);
    uVar4 = *DAT_08056bdc * DAT_08056be0 + DAT_08056be4;
    *DAT_08056bdc = uVar4 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = (byte)(uVar4 >> 0x10) & 1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    puVar2 = local_2c[0];
  }
  local_2c[0] = puVar2;
  if (*(char *)(param_1 + 0x13) == '\0') {
    FUN_08002b10(0xf8);
    iVar3 = local_2c[*(byte *)(param_1 + 0x12)][(uint)*(byte *)(param_1 + 0xf) * 2] -
            (local_2c[*(byte *)(param_1 + 0x12)] + (uint)*(byte *)(param_1 + 0xf) * 2)[-2];
    FUN_0801cf00(param_1,*(undefined2 *)(local_2c + (iVar3 >> 0x1f & 1U) + 2));
    uVar5 = FUN_0810d338(((bVar1 >> 4 & 1) * 2 + -1) * iVar3,
                         local_2c[*(byte *)(param_1 + 0x12)][(uint)*(byte *)(param_1 + 0xf) * 2 + 1]
                         - local_2c[*(byte *)(param_1 + 0x12)]
                           [(uint)*(byte *)(param_1 + 0xf) * 2 + -1]);
    *(undefined4 *)(param_1 + 0xc4) = uVar5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08056bec) * 4 + DAT_08056be8)) * 0x18 + DAT_08056bf0);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (*(int *)(param_1 + 0x68) < iVar3) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
  }
  iVar3 = DAT_08056bf4;
  uVar4 = (uint)*(byte *)(param_1 + 0xc4);
  iVar6 = *(int *)(param_1 + 0x5c) * (int)*(short *)((uVar4 + 0x40 & 0xff) * 2 + DAT_08056bf4);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar9 = *(int *)(param_1 + 0x54) + (iVar6 >> 8);
  *(int *)(param_1 + 0x54) = iVar9;
  iVar6 = *(int *)(param_1 + 0x5c) * (int)*(short *)(uVar4 * 2 + iVar3);
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar8 = *(int *)(param_1 + 0xbc) + (iVar6 >> 8);
  *(int *)(param_1 + 0xbc) = iVar8;
  *(int *)(param_1 + 0x58) = iVar8 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + iVar3) * 2;
  piVar7 = local_2c[*(byte *)(param_1 + 0x12)] + (uint)*(byte *)(param_1 + 0xf) * 2;
  iVar3 = *piVar7 - piVar7[-2];
  iVar6 = piVar7[1] - piVar7[-1];
  if (((iVar3 == 0) ||
      ((uint)((iVar3 + -1) * 2) < (uint)((iVar9 - *(int *)(param_1 + 0x60)) + -1 + iVar3))) &&
     ((iVar6 == 0 ||
      ((uint)((iVar6 + -1) * 2) < (uint)((iVar8 - *(int *)(param_1 + 0xb8)) + -1 + iVar6))))) {
    uVar4 = *(byte *)(param_1 + 0xf) + 1;
    *(char *)(param_1 + 0xf) = (char)uVar4;
    if ((uVar4 & 0xff) < 5) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 4;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


