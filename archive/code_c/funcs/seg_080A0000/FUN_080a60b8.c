// undefined FUN_080a60b8(void)
// entry 0x80a60b8


undefined4 FUN_080a60b8(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a6154);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080a6158,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a615c;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  cVar2 = FUN_080a66b4(param_1);
  if (cVar2 == '\x02') {
    FUN_0801cf00(param_1,0x8a00);
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_080a67d8(param_1);
  FUN_080a6160(param_1);
  return in_lr;
}


