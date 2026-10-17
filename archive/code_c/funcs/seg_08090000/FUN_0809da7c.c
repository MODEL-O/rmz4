// undefined FUN_0809da7c(void)
// entry 0x809da7c


undefined4 FUN_0809da7c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0809db30);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809db34,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0809db38;
  *(undefined4 *)(param_1 + 0x5c) = 0x180;
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + DAT_0809db3c;
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) + 0x6000;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809db40);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_0809e1d0(param_1);
  FUN_0809db44(param_1);
  return in_lr;
}


