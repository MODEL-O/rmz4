// undefined FUN_08071210(void)
// entry 0x8071210


undefined4 FUN_08071210(int param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  short asStack_20 [4];
  
  FUN_08129258(asStack_20,DAT_080712cc,6);
  bVar1 = *(byte *)(param_1 + 10) >> 4;
  bVar2 = false;
  bVar3 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080736c4(param_1,6);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (int)asStack_20[bVar3];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_080712d4) * 4 +
                               DAT_080712d0)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb9) * 4 + DAT_080712d8))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = FUN_08073850(param_1);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
  }
  else {
    FUN_08073a68(param_1);
    *(undefined4 *)(param_1 + 0x60) = 0;
    bVar2 = true;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((bVar1 & 1) == 0) {
    iVar4 = FUN_0807371c(param_1);
    if (iVar4 == 0) goto LAB_0807137c;
    FUN_080738b4(param_1);
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    iVar4 = FUN_08073784(param_1);
    if (iVar4 == 0) goto LAB_0807137c;
    FUN_08073940(param_1);
    bVar3 = (bVar1 & 1) + 1 & 1;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    if (bVar3 == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
  }
  *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
LAB_0807137c:
  if (bVar2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


