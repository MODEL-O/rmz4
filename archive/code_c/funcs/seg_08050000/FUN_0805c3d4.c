// undefined FUN_0805c3d4(void)
// entry 0x805c3d4


undefined4 FUN_0805c3d4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  undefined4 local_2c [3];
  undefined1 auStack_20 [4];
  
  local_2c[0] = *DAT_0805c4d4;
  local_2c[1] = DAT_0805c4d4[1];
  local_2c[2] = DAT_0805c4d4[2];
  FUN_08129258(auStack_20,DAT_0805c4d8,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar2 = *(char *)(param_1 + 0x11) + 1U & 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805c4dc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = auStack_20[bVar1];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb8) = 0xff;
  *(undefined1 *)(param_1 + 0xb9) = 0xff;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(short *)(param_1 + 0xca) = (short)local_2c[bVar1];
  *(undefined4 *)(param_1 + 0xcc) = 0;
  uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),1,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_08001d30(DAT_0805c4e0,
               ((uint)*(ushort *)(DAT_0805c4e4 + 0xa2) - (uint)(*(ushort *)(DAT_0805c4e0 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_0805c4e8,
               ((uint)*(ushort *)(DAT_0805c4ec + 0xa2) - (uint)*(byte *)(DAT_0805c4e8 + 7)) * 0x20 +
               0x200);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  *(byte *)(param_1 + 0x4c) = bVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
  if (bVar2 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  FUN_080503cc(param_1,*(undefined4 *)*DAT_0805c520,(int)*(short *)(local_2c + bVar1));
  FUN_0805c524(param_1);
  return in_lr;
}


