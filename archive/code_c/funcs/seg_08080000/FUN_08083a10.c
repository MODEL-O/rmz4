// undefined FUN_08083a10(void)
// entry 0x8083a10


undefined4 FUN_08083a10(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,0x1c00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08083a70,param_1 + 0x54,0x10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08083a74;
  uVar1 = FUN_08083894(param_1,1,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xd) = 2;
  return in_lr;
}


