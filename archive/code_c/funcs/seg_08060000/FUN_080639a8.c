// undefined FUN_080639a8(void)
// entry 0x80639a8


undefined4 FUN_080639a8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  undefined4 local_28 [3];
  
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar4 = uVar6 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x200;
    *(int *)(param_1 + 100) = iVar4 * -0x10;
    iVar4 = (uint)(*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x7000) * 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (iVar4 + -1) * 0x10;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = (byte)iVar4 | (byte)uVar6;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0xd0) + 0x2800;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xd0) + 0xc800;
  }
  iVar8 = *(int *)(param_1 + 0xd4) + 0x7000;
  iVar5 = (bVar1 >> 1 & 1) * 2;
  if (*(int *)(param_1 + 100) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      FUN_08065a94(param_1,0xc);
      uVar6 = uVar6 + 1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar6;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
      if (uVar6 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    else {
      if ((*(char *)(param_1 + 0x12) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
      goto LAB_08063ada;
      FUN_08065a94(param_1,0);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    if (-1 < (int)((iVar3 - iVar4) * ((bVar1 & 1) * 2 + -1))) {
      *(int *)(param_1 + 0x54) = iVar4;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
LAB_08063ada:
  iVar7 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar2 = FUN_08128fb8(-iVar7,iVar3);
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar7 * 2 + iVar3 * iVar2) * (iVar2 + 1) >> 1)) - iVar8) *
           (iVar5 + -1)) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar7;
  iVar7 = iVar7 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar7;
  if (iVar7 < 0) {
    iVar3 = DAT_08063b20;
    if (DAT_08063b20 <= iVar7) goto LAB_08063b32;
  }
  else if ((iVar7 < 1) || (iVar3 = 0x200, iVar7 < 0x201)) goto LAB_08063b32;
  *(int *)(param_1 + 0x60) = iVar3;
LAB_08063b32:
  if (-1 < (iVar5 + -1) * (*(int *)(param_1 + 0x58) - iVar8)) {
    *(int *)(param_1 + 0x58) = iVar8;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063be4) * 4 +
                               DAT_08063be0)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063be8))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\x02') && (*(int *)(param_1 + 0x54) == iVar4)) &&
     (*(int *)(param_1 + 0x58) == iVar8)) {
    local_28[0] = *DAT_08063bec;
    local_28[1] = DAT_08063bec[1];
    local_28[2] = DAT_08063bec[2];
    iVar4 = FUN_08066160(param_1,&stack0xffffffe4);
    *(char *)(param_1 + 0xe0) = (char)local_28[iVar4];
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


