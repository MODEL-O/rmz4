// undefined FUN_080a25d0(void)
// entry 0x80a25d0


undefined4 FUN_080a25d0(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar4 = bVar2 & 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a2630);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = 0x78;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,DAT_080a26cc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a26d0,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a26d4;
  if (*(short *)(*DAT_080a26d8 + 10) < 6) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a26dc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    uVar5 = 0;
    do {
      FUN_080a2d40(param_1,param_1 + 0x54,uVar1,uVar5 & 0xff);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 6);
    FUN_080a2708(param_1);
  }
  return in_lr;
}


