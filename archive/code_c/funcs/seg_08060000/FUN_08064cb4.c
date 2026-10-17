// undefined FUN_08064cb4(void)
// entry 0x8064cb4


undefined4 FUN_08064cb4(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_08064db0);
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    if (iVar5 != 0) {
      *(undefined1 *)(iVar5 + 0xb5) = 1;
      *(int *)(param_1 + 0xbc) = 0;
    }
    iVar5 = *(int *)(param_1 + 200);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0x8c) = 0;
      *(undefined4 *)(iVar5 + 0x90) = 0;
      *(undefined1 *)(iVar5 + 0x94) = 0;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
      piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_08064db4);
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
      *(int *)(param_1 + 200) = 0;
    }
    iVar5 = *(int *)(param_1 + 0xd8);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfc;
      *(undefined4 *)(iVar5 + 0x8c) = 0;
      *(undefined4 *)(iVar5 + 0x90) = 0;
      *(undefined1 *)(iVar5 + 0x94) = 0;
      *(byte *)(iVar5 + 10) = *(byte *)(iVar5 + 10) & 0xfb;
      piVar4 = (int *)((uint)*(byte *)(iVar5 + 9) * 4 + DAT_08064db8);
      *(undefined4 *)(iVar5 + 0xc) = 3;
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
      *(int *)(param_1 + 0xd8) = 0;
    }
    FUN_080664bc(param_1 + 0x54,2,1);
    bVar1 = *(byte *)(param_1 + 0xb6);
    FUN_08065a94(param_1,0xd);
    uVar6 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar5 = ((uint)bVar1 * 2 + -1) * -0x180;
    *(int *)(param_1 + 0x5c) = iVar5;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x1f;
    }
    *(int *)(param_1 + 100) = -(iVar5 >> 5);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08064e60) * 4 +
                               DAT_08064e5c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08064e64))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      FUN_08065f24(param_1);
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  return in_lr;
}


