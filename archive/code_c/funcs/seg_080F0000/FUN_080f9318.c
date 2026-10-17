// undefined FUN_080f9318(void)
// entry 0x80f9318


undefined4 FUN_080f9318(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined1 auStack_18 [4];
  
  FUN_08129258(auStack_18,DAT_080f9378,3);
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(DAT_080f937c + 0x26) + 1;
  *(byte *)(DAT_080f937c + 0x26) = bVar1;
  if (bVar1 < 2) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f93d4);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (uVar5 == 3) {
      uVar5 = *DAT_080f93d8 * DAT_080f93dc + DAT_080f93e0;
      *DAT_080f93d8 = uVar5 & 0x7fffffff;
      uVar5 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,3);
    }
    *(undefined1 *)(param_1 + 0xb4) = auStack_18[uVar5];
    *(undefined1 *)(param_1 + 0xb6) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    FUN_0801cc9c(param_1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    if (bVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar4 = bVar4 & 1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    FUN_0801cf00(param_1,0x8100);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,*(undefined4 *)*DAT_080f9484,param_1 + 0x54,0x20);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080f9488;
    FUN_080fa1c8(param_1);
    FUN_080f948c(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f9380);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


