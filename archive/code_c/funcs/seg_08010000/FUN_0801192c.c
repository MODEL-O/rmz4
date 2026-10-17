// undefined FUN_0801192c(void)
// entry 0x801192c


undefined4 FUN_0801192c(int param_1)

{
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 in_lr;
  
  puVar4 = (ushort *)(param_1 + 0x68);
  uVar1 = *puVar4;
  *puVar4 = uVar1 - 1;
  if ((ushort)(uVar1 - 1) < 0x40) {
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + -4;
    if (*puVar4 == 0) {
      *(undefined1 *)(DAT_08011960 + DAT_08011964) = 4;
    }
  }
  else {
    psVar3 = (short *)(param_1 + 0x6a);
    if (*psVar3 < 0x100) {
      *psVar3 = *psVar3 + 4;
    }
  }
  if (*(ushort *)(param_1 + 0x68) < 4) {
    uVar2 = *(ushort *)(param_1 + 0x12) - 1;
    *(short *)(param_1 + 0x12) = (short)uVar2;
    iVar5 = DAT_0801199c;
  }
  else {
    if (7 < *(ushort *)(param_1 + 0x12)) {
      return in_lr;
    }
    uVar2 = *(ushort *)(param_1 + 0x12) + 1;
    *(short *)(param_1 + 0x12) = (short)uVar2;
    iVar5 = DAT_080119c4;
  }
  *(ushort *)(iVar5 + 2) = (ushort)((uVar2 & 0xffff) >> 1) & 0x1f | 0x1000;
  return in_lr;
}


