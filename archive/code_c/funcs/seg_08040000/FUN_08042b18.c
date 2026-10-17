// undefined FUN_08042b18(void)
// entry 0x8042b18


undefined4 FUN_08042b18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08042bbc);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08042bc0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08042bc4;
  *(undefined1 *)(param_1 + 0x25) = 0x11;
  FUN_08042964(uVar2,uVar1,param_1,0);
  FUN_08042964(uVar2,uVar1,param_1,1);
  FUN_08042964(uVar2,uVar1,param_1,2);
  FUN_08042964(uVar2,uVar1,param_1,3);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x800;
  return in_lr;
}


