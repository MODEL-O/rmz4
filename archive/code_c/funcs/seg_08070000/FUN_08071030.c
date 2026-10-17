// undefined FUN_08071030(void)
// entry 0x8071030


undefined4 FUN_08071030(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  short asStack_30 [4];
  short asStack_28 [4];
  short asStack_20 [4];
  
  FUN_08129258(asStack_30,PTR_DAT_08071134,6);
  FUN_08129258(asStack_28,PTR_DAT_08071138,6);
  FUN_08129258(asStack_20,PTR_DAT_0807113c,6);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  uVar4 = bVar1 & 1;
  bVar2 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,5);
    *(uint *)(param_1 + 0x5c) = (int)asStack_30[bVar2] * (uVar4 * 2 + -1);
    *(int *)(param_1 + 0x60) = -(int)asStack_28[bVar2];
    *(int *)(param_1 + 0x68) = (int)asStack_20[bVar2];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_08071144) * 4 +
                               DAT_08071140)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_08071148))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      FUN_08002b10(0x126);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar3 = FUN_080737e8(param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
    }
    else {
      FUN_080739cc(param_1);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if ((bVar1 & 1) == 0) {
      iVar3 = FUN_0807371c(param_1);
      if (iVar3 == 0) goto LAB_080711f4;
      FUN_080738b4(param_1);
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      iVar3 = FUN_08073784(param_1);
      if (iVar3 == 0) goto LAB_080711f4;
      FUN_08073940(param_1);
      uVar4 = uVar4 + 1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar4;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
      if (uVar4 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
    }
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  else {
    FUN_08073a68(param_1);
  }
LAB_080711f4:
  if (-1 < *(int *)(param_1 + 0x60)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


