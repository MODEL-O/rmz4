// undefined FUN_08092cf4(void)
// entry 0x8092cf4


undefined4 FUN_08092cf4(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x11);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08092d50 + 0x54);
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08092d54);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
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
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08092da8,param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08092dac;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_0801cf00(param_1,0x4000);
    FUN_0801cff0(param_1);
    uVar5 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  else if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 9;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_0801cf00(param_1,DAT_08092df4);
    FUN_0801cff0(param_1);
  }
  FUN_08093138(param_1);
  return in_lr;
}


