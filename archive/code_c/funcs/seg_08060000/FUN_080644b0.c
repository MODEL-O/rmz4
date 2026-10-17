// undefined FUN_080644b0(void)
// entry 0x80644b0


undefined4 FUN_080644b0(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *DAT_0806450c * DAT_08064510 + DAT_08064514;
    *DAT_0806450c = uVar2 & 0x7fffffff;
    uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
    FUN_08065a94(param_1,0);
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (uVar2 == 0) {
      iVar3 = *(int *)(param_1 + 0xd0) + 0xc800;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xd0) + 0x2800;
    }
    *(int *)(param_1 + 0x54) = iVar3;
    *(undefined4 *)(param_1 + 0x60) = 0x300;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_080645e8) * 4 +
                               DAT_080645e4)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_080645ec))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  iVar3 = *(int *)(param_1 + 0xd4) + 0x8800;
  if (iVar3 <= iVar4) {
    *(int *)(param_1 + 0x58) = iVar3;
    local_1c[0] = *DAT_080645f0;
    local_1c[1] = DAT_080645f0[1];
    local_1c[2] = DAT_080645f0[2];
    iVar3 = FUN_08066160(param_1,&stack0xfffffff0);
    *(char *)(param_1 + 0xe0) = (char)local_1c[iVar3];
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


