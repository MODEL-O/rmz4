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
  
  iVar1 = 0x02000a04;
  bVar2 = *(byte *)(param_1 + 0xe);
  local_2c[0] = (uint)bVar2;
  if (local_2c[0] == 0) {
    uVar8 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar11 = (ushort *)(uVar8 * 2 + 0x02000a04);
    *puVar11 = (ushort)*(undefined4 *)(param_1 + 0x60) | (ushort)*(undefined4 *)(param_1 + 100) |
               (ushort)0x00008044;
    *(undefined4 *)(uVar8 * 4 + iVar1 + 8) = 0;
    *(byte *)(param_1 + 0x68) = bVar2;
    *(byte *)(param_1 + 0x69) = bVar2;
    *(byte *)(param_1 + 0x6a) = bVar2;
    *(byte *)(param_1 + 0x6b) = bVar2;
    iVar4 = 0x00003039;
    iVar1 = 0x41c64e6d;
    piVar10 = (int *)(0x0000626c + 0x0202f610);
    iVar9 = 0x41c64e6d * *piVar10 + 0x00003039;
    *(byte *)(param_1 + 0x6c) = ((byte)((uint)iVar9 >> 0x10) & 1) + 3;
    iVar9 = iVar1 * iVar9 + iVar4;
    *(byte *)(param_1 + 0x6d) = ((byte)((uint)iVar9 >> 0x10) & 1) + 5;
    iVar4 = iVar1 * iVar9 + iVar4;
    *piVar10 = iVar4;
    *(byte *)(param_1 + 0x6e) = ((byte)((uint)iVar4 >> 0x10) & 1) + 7;
    *(byte *)(param_1 + 0x6f) = bVar2;
    *(ushort *)(param_1 + 0x10) = (ushort)bVar2;
    *(ushort *)(param_1 + 0x12) = (ushort)bVar2;
    FUN_08128be0(local_2c,(*puVar11 & 0x1f00) * 8 + 0x6000000,0x01000200);
    FUN_08128be0((*(int *)0x08b2c0b8) + 0x08b2c0c0,(*puVar11 & 0x1f00) * 8 + 0x06000800,0x200);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x01';
  iVar1 = 0x0202f610;
  pbVar5 = (byte *)(param_1 + 0x69);
  if (0xfb < *pbVar5) {
    *pbVar5 = 0;
    iVar4 = *(int *)(0x0000626c + iVar1) * 0x41c64e6d + 0x00003039;
    *(int *)(0x0000626c + iVar1) = iVar4;
    *(char *)(param_1 + 0x6c) = ((byte)((uint)iVar4 >> 0x10) & 1) + 3;
  }
  pbVar6 = (byte *)(param_1 + 0x6a);
  if (0xf9 < *pbVar6) {
    *pbVar6 = 0;
    iVar4 = *(int *)(0x0000626c + iVar1) * 0x41c64e6d + 0x00003039;
    *(int *)(0x0000626c + iVar1) = iVar4;
    *(char *)(param_1 + 0x6d) = ((byte)((uint)iVar4 >> 0x10) & 1) + 5;
  }
  pbVar7 = (byte *)(param_1 + 0x6b);
  if (0xf7 < *pbVar7) {
    *pbVar7 = 0;
    iVar4 = *(int *)(0x0000626c + iVar1) * 0x41c64e6d + 0x00003039;
    *(int *)(0x0000626c + iVar1) = iVar4;
    *(char *)(param_1 + 0x6e) = ((byte)((uint)iVar4 >> 0x10) & 1) + 7;
  }
  if ((*(byte *)(0x02000ab0 + 0x0002d025) & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x6f);
    if (bVar2 != 0x20) {
      if (0x001c5fff < *(int *)(*(int *)(0x000063a8 + iVar1) + 0x54)) {
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
  uVar8 = *(uint *)(0x0000626c + iVar1) * 0x41c64e6d + 0x00003039;
  *(uint *)(0x0000626c + iVar1) = uVar8;
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


