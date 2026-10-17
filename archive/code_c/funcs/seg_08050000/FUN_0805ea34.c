// undefined FUN_0805ea34(void)
// entry 0x805ea34


undefined4 FUN_0805ea34(int param_1)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_4c [8];
  short asStack_44 [8];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  
  FUN_08129258(auStack_4c,DAT_0805ebc0,6);
  FUN_08129258(asStack_44,DAT_0805ebc4,0x10);
  bVar3 = *(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x5c);
    FUN_08002b10(0x53);
    if (((*(ushort *)(DAT_0805ebc8 + 8) & 1) != 0) && ((*(byte *)(DAT_0805ebc8 + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0805ebc8 + 8) = (ushort)DAT_0805ebcc & *(ushort *)(DAT_0805ebc8 + 8) | 0x10;
    }
    *(undefined1 *)(param_1 + 0x25) = 0xf;
    FUN_0805ee6c(param_1,auStack_4c[(uint)bVar3 * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805ebd4) * 4 +
                               DAT_0805ebd0)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805ebd8) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  local_30 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = local_30;
  uVar5 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((uVar5 & 7) == 0) {
    uVar4 = (uVar5 & 0xff) >> 3 & 3;
    uVar5 = DAT_0805ebe0 * *DAT_0805ebdc + DAT_0805ebe4;
    local_24 = uVar5 & 0x7fffffff;
    local_2c = ((bVar1 >> 4 & 1) * 2 + -1) *
               ((int)asStack_44[uVar4 * 2] + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100);
    sVar2 = asStack_44[uVar4 * 2 + 1];
    uVar5 = DAT_0805ebe0 * local_24 + DAT_0805ebe4;
    *DAT_0805ebdc = uVar5 & 0x7fffffff;
    local_28 = (int)sVar2 + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100;
    local_34 = *(int *)(param_1 + 0x54) + local_2c;
    local_30 = local_28 + local_30;
    FUN_080d0c88(1);
  }
  uVar5 = *(int *)(param_1 + 0x68) + 1;
  *(uint *)(param_1 + 0x68) = uVar5;
  if ((int)uVar5 < 0x80) {
    if ((uVar5 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ebfe;
    }
  }
  else if ((uVar5 & 3) == 0) {
    bVar3 = *(byte *)(param_1 + 10) | 1;
    goto LAB_0805ebfe;
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0805ebfe:
  *(byte *)(param_1 + 10) = bVar3;
  if (*(int *)(DAT_0805ec44 + 0x3c) + DAT_0805ec48 < *(int *)(param_1 + 0x58)) {
    *(byte *)(DAT_0805ec44 + -0xd6) = *(byte *)(DAT_0805ec44 + -0xd6) | 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  }
  return in_lr;
}


