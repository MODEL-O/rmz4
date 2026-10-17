// undefined FUN_08012230(void)
// entry 0x8012230


undefined4 FUN_08012230(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 in_lr;
  uint local_1c [2];
  
  iVar1 = DAT_080122fc;
  if ((*(byte *)(DAT_080122f4 + DAT_080122f8) & 0xf) != 3) {
    local_1c[0] = (uint)*(byte *)(param_1 + 0xe);
    if (local_1c[0] != 0) {
      return in_lr;
    }
    FUN_08128be0(local_1c,(*(ushort *)((*(uint *)(param_1 + 0x5c) >> 4) * 2 + DAT_08012358) & 0x1f00
                          ) * 8 + 0x6000000,DAT_0801235c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar2 = (*(uint *)(param_1 + 0x5c) & 0xffff) >> 4;
    uVar4 = *(uint *)(param_1 + 100);
    *(ushort *)(uVar2 * 2 + DAT_080122fc) = (ushort)uVar4 | 0x45;
    *(undefined4 *)(uVar2 * 4 + iVar1 + 8) = 0;
    FUN_08128be0(*DAT_08012300 + DAT_08012304,(uVar4 & 0x1f00) * 8 + 0x6000000,0x200);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0x68);
  if (*pbVar3 == 0) {
    uVar2 = *(uint *)(DAT_08012308 + DAT_0801230c) * DAT_08012310 + DAT_08012314;
    *(uint *)(DAT_08012308 + DAT_0801230c) = uVar2;
    if ((uVar2 >> 0x10 & 0xf) == 0) {
      *pbVar3 = 1;
    }
    if (*pbVar3 == 0) goto LAB_080122da;
  }
  *(short *)(param_1 + 0x10) =
       *(short *)((uint)*pbVar3 * 2 + DAT_08012318) + *(short *)(param_1 + 0x10);
  *pbVar3 = *pbVar3 + 1;
LAB_080122da:
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 0x100;
  *(short *)(param_1 + 0x12) = (short)DAT_0801231c + *(short *)(param_1 + 0x12);
  return in_lr;
}


