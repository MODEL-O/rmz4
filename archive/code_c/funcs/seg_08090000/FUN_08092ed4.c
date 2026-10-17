// undefined FUN_08092ed4(void)
// entry 0x8092ed4


undefined4 FUN_08092ed4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08092f44 + 0x54);
  uVar5 = *(uint *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08092f4c);
  if (((int)(uint)*(byte *)(((int)uVar5 >> 3) + DAT_08092f48 + 4) >> (uVar5 & 7) & 1U) == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08092fa8);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
    *(undefined1 *)(param_1 + 0xb9) = 0;
    *(undefined1 *)(param_1 + 0xba) = 0;
    uVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    FUN_0801cc9c(param_1);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    FUN_0801cf00(param_1,0x4000);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0809300c,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08093010;
    FUN_08093138(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08092f50);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


