// undefined FUN_0805ec4c(void)
// entry 0x805ec4c


undefined4 FUN_0805ec4c(int param_1)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_48 [8];
  short asStack_40 [8];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_08129258(auStack_48,DAT_0805ec8c,6);
  FUN_08129258(asStack_40,DAT_0805ec90,0x10);
  bVar3 = *(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x5c);
    FUN_08002b10(0x53);
    if (((*(ushort *)(DAT_0805edfc + 8) & 1) != 0) && ((*(byte *)(DAT_0805edfc + 0x12) & 1) == 0)) {
      *(ushort *)(DAT_0805edfc + 8) = (ushort)DAT_0805ee00 & *(ushort *)(DAT_0805edfc + 8) | 0x10;
    }
    *(undefined1 *)(param_1 + 0x25) = 0xf;
    FUN_0805ee6c(param_1,auStack_48[(uint)bVar3 * 2]);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x100;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  else if (*(char *)(param_1 + 0xf) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805ee08) * 4 +
                               DAT_0805ee04)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805ee0c) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  uVar5 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)uVar5;
  if ((uVar5 & 7) == 0) {
    uVar4 = (uVar5 & 0xff) >> 3 & 3;
    uVar5 = DAT_0805ee14 * *DAT_0805ee10 + DAT_0805ee18;
    local_28 = ((bVar1 >> 4 & 1) * 2 + -1) *
               ((int)asStack_40[uVar4 * 2] + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100);
    sVar2 = asStack_40[uVar4 * 2 + 1];
    uVar5 = DAT_0805ee14 * (uVar5 & 0x7fffffff) + DAT_0805ee18;
    *DAT_0805ee10 = uVar5 & 0x7fffffff;
    local_24 = (int)sVar2 + (((uVar5 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100;
    local_30 = *(int *)(param_1 + 0x54) + local_28;
    local_2c = *(int *)(param_1 + 0x58) + local_24;
    FUN_080d0c88(1);
  }
  uVar5 = *(uint *)(param_1 + 0x68);
  if (uVar5 == 0) {
    *(byte *)(DAT_0805edfc + 0x12) = *(byte *)(DAT_0805edfc + 0x12) | 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    return in_lr;
  }
  if ((int)uVar5 < 0x80) {
    if ((uVar5 & 3) == 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ee5a;
    }
  }
  else {
    if (uVar5 == 0x80) {
      *(byte *)(DAT_0805ee50 + 9) = *(byte *)(DAT_0805ee50 + 9) | 0x20;
    }
    if ((uVar5 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_0805ee5a;
    }
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_0805ee5a:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}


