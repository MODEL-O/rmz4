// undefined FUN_081180f8(void)
// entry 0x81180f8


undefined4 FUN_081180f8(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  undefined4 in_lr;
  
  iVar6 = *(int *)(DAT_08118188 + param_1);
  pbVar8 = (byte *)(DAT_0811818c + iVar6);
  bVar1 = *pbVar8;
  puVar9 = (undefined1 *)(iVar6 + 0xe4);
  uVar2 = *puVar9;
  uVar3 = *(undefined1 *)(iVar6 + 0xe5);
  pbVar10 = (byte *)(DAT_08118190 + param_1);
  bVar4 = *pbVar10;
  if (bVar4 != *(byte *)(iVar6 + 0xc0)) {
    if (bVar4 != *(byte *)(iVar6 + 0xc1)) {
      puVar7 = (ushort *)(iVar6 + 0x15a);
      uVar5 = *puVar7;
      *puVar7 = uVar5 | 0x8000;
      *puVar7 = uVar5 | 0x8000 | (ushort)*(byte *)((uint)*pbVar10 + DAT_08118194);
    }
    if (*(char *)(DAT_08118198 + param_1) == *(char *)(iVar6 + 0xc0)) {
      *pbVar8 = *pbVar8 & 0xef | (byte)(((bVar1 & 0x3f) >> 5) << 4);
      *puVar9 = uVar3;
    }
    else {
      *pbVar8 = *pbVar8 & 0xef;
      *puVar9 = 0;
    }
  }
  pbVar8 = (byte *)(DAT_0811820c + param_1);
  bVar4 = *pbVar8;
  if (bVar4 != *(byte *)(iVar6 + 0xc1)) {
    if (bVar4 != *(byte *)(iVar6 + 0xc0)) {
      puVar7 = (ushort *)(iVar6 + 0x15a);
      uVar5 = *puVar7;
      *puVar7 = uVar5 | 0x8000;
      *puVar7 = uVar5 | 0x8000 | (ushort)*(byte *)((uint)*pbVar8 + DAT_08118210);
    }
    if (*(char *)(DAT_08118214 + param_1) == *(char *)(iVar6 + 0xc1)) {
      *(byte *)(DAT_08118218 + iVar6) =
           *(byte *)(DAT_08118218 + iVar6) & 0xdf | (byte)(((bVar1 & 0x1f) >> 4) << 5);
      *(undefined1 *)(iVar6 + 0xe5) = uVar2;
    }
    else {
      *(byte *)(DAT_08118244 + iVar6) = *(byte *)(DAT_08118244 + iVar6) & 0xdf;
      *(undefined1 *)(iVar6 + 0xe5) = 0;
    }
  }
  return in_lr;
}


