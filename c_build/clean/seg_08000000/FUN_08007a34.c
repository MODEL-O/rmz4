// undefined FUN_08007a34(void)
// entry 0x8007a34


void FUN_08007a34(int *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uVar2 = (uint)*(ushort *)(param_1 + 3);
  param_1[0xf] = param_1[0xd];
  param_1[0x10] = param_1[0xe];
  param_1[0x15] = param_1[0x13];
  param_1[0x16] = param_1[0x14];
  param_1[0xd] = *param_3 >> 8;
  iVar6 = param_3[1];
  param_1[0xe] = iVar6 >> 8;
  uVar7 = (uint)*(byte *)((param_1[0xd] >> 4) + DAT_08007a90);
  uVar3 = (uint)*(byte *)((iVar6 >> 0xc) + DAT_08007a94);
  if ((uVar7 < *(byte *)(*(int *)(param_2 + 0x6c) + 2)) &&
     (uVar3 < *(byte *)(*(int *)(param_2 + 0x6c) + 3))) {
    piVar5 = (int *)(((int)(uint)(*(ushort **)(param_2 + 0x74))
                                 [(uVar3 << (**(ushort **)(param_2 + 0x74) & 0xff)) + uVar7 + 4] >>
                      ((2 - uVar2) * 4 & 0xff) & 0xfU) * 0xc + *(int *)(param_2 + 0x70));
    iVar6 = *piVar5;
    iVar4 = piVar5[1];
    iVar10 = piVar5[2];
    iVar11 = *param_1;
  }
  else {
    iVar11 = *param_1;
    iVar4 = param_1[1];
    iVar10 = param_1[2];
    iVar6 = iVar11;
  }
  if ((iVar11 != iVar6) || (param_1[1] != iVar4)) {
    if (param_1[2] != 0) {
      FUN_08128f84(param_1,param_2);
    }
    *param_1 = iVar6;
    param_1[1] = iVar4;
    param_1[2] = iVar10;
    iVar11 = uVar2 * 4;
    uVar3 = *(uint *)(param_2 + 0x18 + iVar11);
    param_1[0x17] = uVar3;
    iVar9 = *(int *)(param_2 + 0x24 + iVar11);
    param_1[0x18] = iVar9;
    iVar10 = *(int *)(param_2 + 0x30 + iVar11);
    param_1[0x19] = iVar10;
    param_2 = uVar2 * 8 + param_2;
    param_1[0x11] = *(int *)(param_2 + 0x3c);
    param_1[0x12] = *(int *)(param_2 + 0x40);
    param_1[0x13] = *(int *)(param_2 + 0x54);
    param_1[0x14] = *(int *)(param_2 + 0x58);
    iVar11 = DAT_08007b48;
    if ((iVar6 == 0) && (iVar4 == 0)) {
      uVar1 = *(int *)DAT_08007b7c & ~(ushort)(uVar3 << 8);
      puVar8 = DAT_08007b7c;
    }
    else {
      *(ushort *)((uVar3 >> 4) * 2 + DAT_08007b48) =
           (ushort)iVar9 | (ushort)iVar10 | (ushort)DAT_08007b4c;
      uVar1 = (ushort)(uVar3 << 8) | *(ushort *)(iVar11 + -4);
      puVar8 = (ushort *)(iVar11 + -4);
    }
    *puVar8 = uVar1;
    iVar6 = DAT_08007b80;
    param_1[0x10] = DAT_08007b80;
    param_1[0xf] = iVar6;
    param_1[0x16] = iVar6;
    param_1[0x15] = iVar6;
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0;
  }
  return;
}


