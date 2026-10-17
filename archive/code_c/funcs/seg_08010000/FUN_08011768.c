// undefined FUN_08011768(void)
// entry 0x8011768


undefined4 FUN_08011768(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  short *psVar4;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(param_1 + 0x68);
  uVar1 = *puVar3;
  *puVar3 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) < 0x40) {
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 4;
    if (*puVar3 == 0) {
      *(char *)(DAT_0801179c + DAT_080117a0) = *(char *)(DAT_0801179c + DAT_080117a0) + '\x01';
    }
  }
  else {
    psVar4 = (short *)(param_1 + 0x6a);
    if (DAT_080117c8 < *psVar4) {
      *psVar4 = *psVar4 + -4;
    }
  }
  if (*(ushort *)(param_1 + 0x68) < 4) {
    uVar2 = *(ushort *)(param_1 + 0x12) - 1;
  }
  else {
    if (7 < *(ushort *)(param_1 + 0x12)) {
      return in_lr;
    }
    uVar2 = *(ushort *)(param_1 + 0x12) + 1;
  }
  *(short *)(param_1 + 0x12) = (short)uVar2;
  *(ushort *)(DAT_080117f0 + 2) = (ushort)((uVar2 & 0xffff) >> 1) & 0x1f | 0x1000;
  return in_lr;
}


