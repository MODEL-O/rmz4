// undefined FUN_0805cf28(void)
// entry 0x805cf28


undefined4 FUN_0805cf28(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined1 auStack_44 [8];
  ushort auStack_3c [4];
  ushort auStack_34 [4];
  ushort auStack_2c [4];
  int local_24;
  
  FUN_08129258(auStack_44,PTR_DAT_0805d038,6);
  FUN_08129258(auStack_3c,PTR_DAT_0805d03c,6);
  FUN_08129258(auStack_34,PTR_DAT_0805d040,6);
  FUN_08129258(auStack_2c,PTR_DAT_0805d044,6);
  local_24 = *DAT_0805d048;
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 10);
  uVar4 = FUN_0805f150(param_1);
  uVar4 = uVar4 & 0xff;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_44[(uint)bVar1 * 2]);
    *(uint *)(param_1 + 100) = (bVar2 >> 4 & 1) * 2 + -1;
    *(uint *)(param_1 + 0x5c) = (uint)auStack_3c[uVar4];
    *(uint *)(param_1 + 0x60) = (uint)auStack_34[uVar4];
    *(uint *)(param_1 + 0x68) = -(uint)auStack_2c[uVar4];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805d050) * 4 +
                               DAT_0805d04c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805d054) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if ((local_24 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    if (((*(uint *)(param_1 + 0x8c) & 1) == 0) ||
       (iVar5 = *(int *)(param_1 + 0x5c) +
                ((int)*(short *)(param_1 + 0xca) - (int)*(short *)(param_1 + 0xa4)) * -0x40,
       *(int *)(param_1 + 0x5c) = iVar5, 0x100 < iVar5)) {
      iVar6 = *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar6 * *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar5 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar5;
      if (iVar5 < 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      iVar5 = *(int *)(param_1 + 0xd0) + iVar6 * 0x5800;
      if (iVar6 * (*(int *)(param_1 + 0x54) - iVar5) < 0) {
        return in_lr;
      }
      *(int *)(param_1 + 0x54) = iVar5;
      uVar3 = 8;
    }
    else {
      uVar3 = 7;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(local_24 + 0x60) = 0;
    FUN_08098314(param_1,0,0);
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)(DAT_0805d058 + 8));
  }
  return in_lr;
}


