// undefined FUN_08059c18(void)
// entry 0x8059c18


undefined4 FUN_08059c18(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_1c [4];
  
  FUN_08129258(auStack_1c,DAT_08059d18,2);
  iVar5 = *(int *)(param_1 + 0x54);
  bVar1 = iVar5 < *(int *)(*DAT_08059d1c + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08059d20);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = auStack_1c[*(byte *)(param_1 + 0x11)];
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar4 = FUN_08008534(iVar5,*(undefined4 *)(param_1 + 0x58),iVar5,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  *(undefined1 *)(param_1 + 0xbe) = 0xff;
  *(undefined1 *)(param_1 + 0xcf) = 0xff;
  *(undefined1 *)(param_1 + 0xcc) = 0xff;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0xff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  FUN_08001d30(DAT_08059d24,
               ((uint)*(ushort *)(DAT_08059d28 + 0xd4) - (uint)(*(ushort *)(DAT_08059d24 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_08059d2c,
               ((uint)*(ushort *)(DAT_08059d30 + 0xd4) - (uint)*(byte *)(DAT_08059d2c + 7)) * 0x20 +
               0x200);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  FUN_0801cf00(param_1,0xa300);
  *(undefined1 *)(param_1 + 0xbd) = 1;
  FUN_0801cff0(param_1);
  FUN_080503cc(param_1,DAT_08059d80,0x40);
  *(undefined4 *)(param_1 + 0x98) = DAT_08059d84;
  FUN_080962f0(param_1);
  FUN_08059d88(param_1);
  return in_lr;
}


