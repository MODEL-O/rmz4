// undefined FUN_0805f214(void)
// entry 0x805f214


undefined4 FUN_0805f214(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,DAT_0805f2b8);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_080503cc(param_1,DAT_0805f2bc,0x60);
  *(undefined4 *)(param_1 + 0x98) = DAT_0805f2c0;
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xcd) = 3;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805f2c4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_0805f2c8(param_1);
  return in_lr;
}


