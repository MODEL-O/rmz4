// undefined FUN_0800c558(void)
// entry 0x800c558


void FUN_0800c558(int param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  psVar1 = 0x02000a1c;
  iVar6 = *(int *)(param_1 + 0x68);
  iVar10 = *(int *)(param_1 + 0x6c);
  uVar12 = 0;
  uVar11 = 0;
  uVar8 = 0;
  do {
    uVar7 = (int)(*(ushort *)(param_1 + 0x70) + uVar8) >> 6;
    uVar11 = uVar11 + (int)*(short *)((uVar7 + 0x40 & 0xff) * 2 + 0x0812930c);
    uVar12 = uVar12 + (int)*(short *)((uVar7 & 0xff) * 2 + 0x0812930c);
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 0x40);
  sVar2 = FUN_08129120((uVar11 >> 6) << 8,0x100);
  *psVar1 = sVar2;
  sVar3 = FUN_08129120((uVar12 >> 6) << 8,0x100);
  psVar1[1] = sVar3;
  sVar3 = FUN_08129120((uVar12 >> 6) * -0x100,0x100);
  psVar1[2] = sVar3;
  psVar1[3] = sVar2;
  iVar9 = *(int *)(param_1 + 0x78);
  iVar6 = *(int *)(param_1 + 0x34) * 0x100 - iVar6;
  iVar4 = iVar6 * *psVar1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar10 = *(int *)(param_1 + 0x38) * 0x100 - iVar10;
  iVar5 = iVar10 * psVar1[1];
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(psVar1 + 4) = (iVar4 >> 8) + (iVar5 >> 8) + *(int *)(param_1 + 0x74);
  iVar6 = iVar6 * psVar1[2];
  if (iVar6 < 0) {
    iVar6 = iVar6 + 0xff;
  }
  iVar10 = iVar10 * psVar1[3];
  if (iVar10 < 0) {
    iVar10 = iVar10 + 0xff;
  }
  *(int *)(0x02000a1c + 6) = (iVar6 >> 8) + (iVar10 >> 8) + iVar9;
  return;
}


