// undefined FUN_0800b138(void)
// entry 0x800b138


void FUN_0800b138(int param_1)

{
  short sVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  iVar4 = 0x02000a04;
  puVar2 = 0x02000a50;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar8 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar6 = (ushort *)(uVar8 * 2 + 0x02000a04);
    *puVar6 = (ushort)0x0000fffc & *puVar6 | 2;
    *puVar2 = *puVar2 | 0x4000;
    *(undefined1 *)((int)puVar2 + 0xd) = 0xff;
    puVar2[3] = 0;
    puVar2[5] = 0xff;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(uVar8 * 4 + iVar4 + 8) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(*(int *)(0x0202f610 + 0x000063a8) + 0x54);
  if (0x000001df < *(int *)(param_1 + 0x34)) {
    if (0x0000059f < *(int *)(param_1 + 0x34)) {
      if (iVar4 <= 0x00095fff) {
        *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
        *(undefined1 *)(puVar2 + 7) = 0xfd;
        if (iVar4 < 0x7e801) {
          iVar9 = 0x86000 - iVar4 >> 8;
          iVar4 = 0;
          *(undefined2 *)(param_1 + 0x12) = 0;
        }
        else {
          iVar9 = 0x86000 - iVar4 >> 8;
          iVar4 = iVar4 + 0xfff81800;
        }
        goto LAB_0800b2b2;
      }
      if (0x000d1fff < iVar4) {
        if (0x0010dfff < iVar4) {
          iVar9 = 0xff;
        }
        else {
          *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
          *(undefined1 *)(puVar2 + 7) = 0xfd;
          if (0x000f2800 < iVar4) {
            iVar9 = 0xfa000 - iVar4 >> 8;
            iVar4 = iVar4 + 0xfff0d800;
            goto LAB_0800b2b2;
          }
          iVar9 = 0xfa000 - iVar4 >> 8;
        }
      }
      else {
        *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
        *(undefined1 *)(puVar2 + 7) = 0xfd;
        if (0x000b8800 < iVar4) {
          iVar9 = 0xc0000 - iVar4 >> 8;
          iVar4 = iVar4 + 0xfff47800;
          goto LAB_0800b2b2;
        }
        iVar9 = 0xc0000 - iVar4 >> 8;
      }
    }
    else {
      *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
      *(undefined1 *)(puVar2 + 7) = 0xfd;
      if (0x56800 < iVar4) {
        iVar9 = 0x5e000 - iVar4 >> 8;
        iVar4 = iVar4 + 0xfffa9800;
        goto LAB_0800b2b2;
      }
      iVar9 = 0x5e000 - iVar4 >> 8;
    }
    iVar4 = 0;
  }
  else {
    if (0x0001d7ff < iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = (0x0001d7ff + 1) - iVar4;
    }
    iVar9 = 0xff;
  }
LAB_0800b2b2:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (iVar4 < 0x1001) {
    sVar1 = *(short *)(param_1 + 0x12);
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x12) = sVar1 + 9;
      if (((ushort)(sVar1 - 0x77U) < 0x10) || (0xff < (ushort)(sVar1 + 9U))) {
        *(undefined2 *)(param_1 + 0x12) = 0;
      }
    }
  }
  else {
    if (*(short *)(param_1 + 0x10) != 0) {
      *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -0x20;
    }
    *(ushort *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 3U & 0xff;
  }
  iVar3 = *(int *)(param_1 + 0x6c) +
          ((int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + 0x0812930c) >> 2) +
          (uint)*(ushort *)(param_1 + 0x10);
  *(int *)(param_1 + 0x6c) = iVar3;
  iVar7 = *(int *)(param_1 + 0x68);
  iVar5 = iVar3 - iVar7;
  iVar4 = iVar5;
  if (iVar5 < 0) {
    iVar4 = -iVar5;
  }
  if (0xa00 < iVar4) {
    if (iVar5 < 0) {
      iVar3 = iVar7 + 0xfffff600;
    }
    else {
      iVar3 = iVar7 + 0xa00;
    }
  }
  *(int *)(param_1 + 0x68) = iVar3;
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (0xff < iVar9) {
    iVar9 = 0xff;
  }
  puVar2[3] = (ushort)iVar9 & 0xff;
  return;
}


