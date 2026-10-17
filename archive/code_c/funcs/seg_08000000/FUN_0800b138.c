// undefined FUN_0800b138(void)
// entry 0x800b138


undefined4 FUN_0800b138(int param_1)

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
  undefined4 in_lr;
  
  iVar4 = DAT_0800b1ac;
  puVar2 = DAT_0800b1a8;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar8 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    puVar6 = (ushort *)(uVar8 * 2 + DAT_0800b1ac);
    *puVar6 = (ushort)DAT_0800b1b0 & *puVar6 | 2;
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
  iVar4 = *(int *)(*(int *)(DAT_0800b1b4 + DAT_0800b1b8) + 0x54);
  if (DAT_0800b1bc < *(int *)(param_1 + 0x34)) {
    if (DAT_0800b1f0 < *(int *)(param_1 + 0x34)) {
      if (iVar4 <= DAT_0800b228) {
        *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
        *(undefined1 *)(puVar2 + 7) = 0xfd;
        if (iVar4 < 0x7e801) {
          iVar9 = 0x86000 - iVar4 >> 8;
          iVar4 = 0;
          *(undefined2 *)(param_1 + 0x12) = 0;
        }
        else {
          iVar9 = 0x86000 - iVar4 >> 8;
          iVar4 = iVar4 + DAT_0800b22c;
        }
        goto LAB_0800b2b2;
      }
      if (DAT_0800b260 < iVar4) {
        if (DAT_0800b298 < iVar4) {
          iVar9 = 0xff;
        }
        else {
          *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
          *(undefined1 *)(puVar2 + 7) = 0xfd;
          if (DAT_0800b29c < iVar4) {
            iVar9 = 0xfa000 - iVar4 >> 8;
            iVar4 = iVar4 + DAT_0800b2a0;
            goto LAB_0800b2b2;
          }
          iVar9 = 0xfa000 - iVar4 >> 8;
        }
      }
      else {
        *(undefined1 *)((int)puVar2 + 0xd) = 0xfb;
        *(undefined1 *)(puVar2 + 7) = 0xfd;
        if (DAT_0800b264 < iVar4) {
          iVar9 = 0xc0000 - iVar4 >> 8;
          iVar4 = iVar4 + DAT_0800b268;
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
        iVar4 = iVar4 + DAT_0800b1f4;
        goto LAB_0800b2b2;
      }
      iVar9 = 0x5e000 - iVar4 >> 8;
    }
    iVar4 = 0;
  }
  else {
    if (DAT_0800b1c0 < iVar4) {
      iVar4 = 0;
    }
    else {
      iVar4 = (DAT_0800b1c0 + 1) - iVar4;
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
          ((int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_0800b334) >> 2) +
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
      iVar3 = iVar7 + DAT_0800b338;
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
  return in_lr;
}


