// undefined FUN_080a248c(void)
// entry 0x80a248c


undefined4 FUN_080a248c(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080a24f4 + 0x54);
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a24f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = 0x78;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  FUN_0801cf00(param_1,DAT_080a2594);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a2598,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a259c;
  if (*(short *)(*DAT_080a25a0 + 10) < 6) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a25a4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  else {
    uVar5 = 0;
    do {
      FUN_080a2d40(param_1,param_1 + 0x54,uVar2,uVar5 & 0xff);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 6);
    FUN_080a2708(param_1);
  }
  return in_lr;
}


