// undefined FUN_0807b464(void)
// entry 0x807b464


undefined4 FUN_0807b464(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_0807b540 + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807b544);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xbc) = 0xff;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xd5) = 0;
  pbVar5 = (byte *)(param_1 + 0xbf);
  *pbVar5 = 0;
  uVar4 = *DAT_0807b548 * DAT_0807b54c + DAT_0807b550;
  *DAT_0807b548 = uVar4 & 0x7fffffff;
  if (((uVar4 & 0x7fffffff) >> 0x10 & 1) != 0) {
    *pbVar5 = 2;
  }
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
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
  FUN_080503cc(param_1,*(undefined4 *)*DAT_0807b59c,0x60);
  FUN_0807ea4c(param_1);
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *pbVar5 = *pbVar5 & 0xfe;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  FUN_0807b5a0(param_1);
  return in_lr;
}


