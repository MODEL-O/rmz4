// undefined FUN_080fc088(void)
// entry 0x80fc088


undefined4 FUN_080fc088(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,0x9900);
  }
  else {
    FUN_0801cf00(param_1,DAT_080fc0cc);
  }
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080fc164,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080fc168;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080fc16c;
  *(undefined2 *)(param_1 + 0x26) = 0x2f;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc170);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080fc174(param_1);
  return in_lr;
}


