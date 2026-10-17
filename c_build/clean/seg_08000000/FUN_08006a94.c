// undefined FUN_08006a94(void)
// entry 0x8006a94


void FUN_08006a94(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  iVar4 = DAT_08006ad0;
  if (*(short *)(DAT_08006ad0 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(*param_2 + DAT_08006ad4,0x3c000);
    *(int *)(iVar4 + 0x1c8) = iVar1 + 0xf000;
    *(int *)(iVar4 + 0x1cc) = param_2[1];
  }
  else {
    *(int *)(DAT_08006ad0 + 0x1c8) = *param_2;
    *(int *)(iVar4 + 0x1cc) = param_2[1];
  }
  piVar7 = *(int **)((uint)(*(byte *)(iVar4 + DAT_08006c08) >> 4) * 4 + param_1 * 8 + DAT_08006c04);
  iVar1 = *piVar7;
  *(int *)DAT_08006c0c = (ushort)DAT_08006c10 & *(int *)DAT_08006c0c;
  FUN_08002c94(iVar4,DAT_08006c14);
  *(int *)(iVar4 + 8) = iVar4;
  *(undefined2 *)(iVar4 + DAT_08006c18) = 0;
  *(ushort *)(iVar4 + 0x1d0) = (ushort)iVar1 | 0x80;
  piVar2 = (int *)(iVar1 * 0xc + DAT_08006c1c);
  FUN_08005328(iVar4 + 0x1b8,piVar2[1] + (int)piVar2,*piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,
               piVar7[3]);
  *(short *)(iVar4 + DAT_08006c20) = (short)DAT_08006c24;
  *(undefined2 *)(iVar4 + DAT_08006c28) = 0xffff;
  *(int *)(iVar4 + DAT_08006c2c) = piVar7[0x1e];
  *(int *)(iVar4 + DAT_08006c30) = piVar7[0x1f];
  FUN_08007220(piVar7,piVar7[3]);
  uVar3 = 0;
  do {
    FUN_08007560((int)(short)uVar3,piVar7);
    iVar4 = DAT_08006c34;
    uVar5 = (int)(short)uVar3 + 1;
    uVar3 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 3);
  *(undefined4 *)(DAT_08006c34 + DAT_08006c38) = DAT_08006c3c;
  puVar8 = (undefined4 *)(iVar4 + DAT_08006c40);
  *puVar8 = 0;
  *(undefined4 *)(iVar4 + DAT_08006c44) = 0;
  puVar6 = (undefined4 *)(iVar4 + DAT_08006c48);
  *puVar6 = 0x3c0000;
  *(undefined4 *)(iVar4 + DAT_08006c4c) = 0x280000;
  if ((*(ushort *)(iVar4 + 0x1d0) & 0x7f) == 4) {
    *puVar8 = 0;
    *puVar6 = 0x78000000;
  }
  *(undefined1 *)(iVar4 + 0x1d2) = 0;
  *(undefined1 *)(iVar4 + DAT_08006c50) = 0;
  uVar3 = 0;
  iVar4 = iVar4 + DAT_08006c54;
  do {
    *(undefined1 *)((short)uVar3 + iVar4) = 0;
    uVar5 = (int)(short)uVar3 + 1;
    uVar3 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 4);
  return;
}


