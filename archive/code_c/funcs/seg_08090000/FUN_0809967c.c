// undefined FUN_0809967c(void)
// entry 0x809967c


undefined4 FUN_0809967c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x6900);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08099724,param_1 + 0x54,7);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08099728;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  uVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809972c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_08099730(param_1);
  return in_lr;
}


