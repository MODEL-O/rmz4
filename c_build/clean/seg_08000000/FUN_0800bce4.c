// undefined FUN_0800bce4(void)
// entry 0x800bce4


void FUN_0800bce4(int param_1)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  uint local_2c [3];
  
  iVar1 = DAT_0800be94;
  bVar2 = *(byte *)(param_1 + 0xe);
  local_2c[0] = (uint)bVar2;
  if (local_2c[0] == 0) {
    uVar8 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar11 = (ushort *)(uVar8 * 2 + DAT_0800be94);
    *puVar11 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
               (ushort)DAT_0800be98;
    *(undefined4 *)(uVar8 * 4 + iVar1 + 8) = 0;
    *(byte *)(param_1 + 0x68) = bVar2;
    *(byte *)(param_1 + 0x69) = bVar2;
    *(byte *)(param_1 + 0x6a) = bVar2;
    *(byte *)(param_1 + 0x6b) = bVar2;
    iVar4 = DAT_0800bea8;
    iVar1 = DAT_0800bea4;
    piVar10 = (int *)(DAT_0800bea0 + DAT_0800be9c);
    iVar9 = DAT_0800bea4 * *piVar10 + DAT_0800bea8;
    *(byte *)(param_1 + 0x6c) = ((byte)((uint)iVar9 >> 0x10) & 1) + 3;
    iVar9 = iVar1 * iVar9 + iVar4;
    *(byte *)(param_1 + 0x6d) = ((byte)((uint)iVar9 >> 0x10) & 1) + 5;
    iVar4 = iVar1 * iVar9 + iVar4;
    *piVar10 = iVar4;
    *(byte *)(param_1 + 0x6e) = ((byte)((uint)iVar4 >> 0x10) & 1) + 7;
    *(byte *)(param_1 + 0x6f) = bVar2;
    *(ushort *)(param_1 + 0x10) = (ushort)bVar2;
    *(ushort *)(param_1 + 0x12) = (ushort)bVar2;
    FUN_08128be0(local_2c,(*puVar11 & 0x1f00) * 8 + 0x6000000,DAT_0800beac);
    FUN_08128be0(*(int *)DAT_0800beb0 + DAT_0800beb4,(*puVar11 & 0x1f00) * 8 + DAT_0800beb8,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x01';
  iVar1 = DAT_0800be9c;
  pbVar5 = (byte *)(param_1 + 0x69);
  if (0xfb < *pbVar5) {
    *pbVar5 = 0;
    iVar4 = *(int *)(DAT_0800bea0 + iVar1) * DAT_0800bea4 + DAT_0800bea8;
    *(int *)(DAT_0800bea0 + iVar1) = iVar4;
    *(char *)(param_1 + 0x6c) = ((byte)((uint)iVar4 >> 0x10) & 1) + 3;
  }
  pbVar6 = (byte *)(param_1 + 0x6a);
  if (0xf9 < *pbVar6) {
    *pbVar6 = 0;
    iVar4 = *(int *)(DAT_0800bea0 + iVar1) * DAT_0800bea4 + DAT_0800bea8;
    *(int *)(DAT_0800bea0 + iVar1) = iVar4;
    *(char *)(param_1 + 0x6d) = ((byte)((uint)iVar4 >> 0x10) & 1) + 5;
  }
  pbVar7 = (byte *)(param_1 + 0x6b);
  if (0xf7 < *pbVar7) {
    *pbVar7 = 0;
    iVar4 = *(int *)(DAT_0800bea0 + iVar1) * DAT_0800bea4 + DAT_0800bea8;
    *(int *)(DAT_0800bea0 + iVar1) = iVar4;
    *(char *)(param_1 + 0x6e) = ((byte)((uint)iVar4 >> 0x10) & 1) + 7;
  }
  if ((*(byte *)(DAT_0800bebc + DAT_0800bec0) & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x6f);
    if (bVar2 != 0x20) {
      if (DAT_0800bec8 < *(int *)(*(int *)(DAT_0800bec4 + iVar1) + 0x54)) {
        bVar2 = 0x20;
      }
      else {
        if (0x1f < bVar2) goto LAB_0800bed4;
        bVar2 = bVar2 + 1;
      }
      *(byte *)(param_1 + 0x6f) = bVar2;
    }
  }
LAB_0800bed4:
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 2;
  uVar8 = *(uint *)(DAT_0800bf00 + iVar1) * DAT_0800bf04 + DAT_0800bf08;
  *(uint *)(DAT_0800bf00 + iVar1) = uVar8;
  if ((uVar8 >> 0x10 & 1) == 0) {
    if (*(short *)(param_1 + 0x12) == 0) {
      *(undefined2 *)(param_1 + 0x12) = 1;
      goto LAB_0800bf1e;
    }
    sVar3 = *(short *)(param_1 + 0x12) + -1;
  }
  else if (*(short *)(param_1 + 0x12) == 8) {
    sVar3 = 7;
  }
  else {
    sVar3 = *(short *)(param_1 + 0x12) + 1;
  }
  *(short *)(param_1 + 0x12) = sVar3;
LAB_0800bf1e:
  *pbVar5 = *(char *)(param_1 + 0x6c) + *pbVar5;
  *pbVar6 = *(char *)(param_1 + 0x6d) + *pbVar6;
  *pbVar7 = *(char *)(param_1 + 0x6e) + *pbVar7;
  return;
}


