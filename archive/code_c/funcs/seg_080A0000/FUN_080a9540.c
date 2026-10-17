// undefined FUN_080a9540(void)
// entry 0x80a9540


undefined4 FUN_080a9540(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0(param_1);
  iVar3 = DAT_080a9640;
  iVar2 = DAT_080a963c;
  puVar1 = DAT_080a9638;
  iVar8 = param_1 + 0x54;
  uVar7 = *DAT_080a9638 * DAT_080a963c + DAT_080a9640;
  *DAT_080a9638 = uVar7 & 0x7fffffff;
  pbVar9 = (byte *)(param_1 + 0xbc);
  FUN_080d4c8c(iVar8,DAT_080a9644,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar9);
  iVar6 = DAT_080a9644 + 0x1c;
  uVar7 = *puVar1 * iVar2 + iVar3;
  *puVar1 = uVar7 & 0x7fffffff;
  FUN_080d4c8c(iVar8,iVar6,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar9);
  iVar6 = DAT_080a9644 + 0x38;
  uVar7 = *puVar1 * iVar2 + iVar3;
  *puVar1 = uVar7 & 0x7fffffff;
  FUN_080d4c8c(iVar8,iVar6,0,((uVar7 & 0x7fffffff) >> 0x10 & 1) << 4 | (uint)*pbVar9);
  FUN_080d0c88(1,iVar8);
  if (*(byte *)(iVar4 + 0xc) < 2) {
    FUN_08002b10(0x2a);
  }
  FUN_0802ab88(0,10,iVar8);
  if (*(ushort *)(DAT_080a9648 + 0xc) <= DAT_080a964c) {
    *(ushort *)(DAT_080a9648 + 0xc) = *(ushort *)(DAT_080a9648 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,iVar8);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9650);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


