// undefined FUN_0801f884(void)
// entry 0x801f884


undefined4 FUN_0801f884(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_08002c0c(param_1,param_1 + 0x38,0,0);
  *(int *)(param_1 + 4) = param_1 + 0x28;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  FUN_0801f924(param_1,param_2);
  FUN_0801f998(param_1,8);
  return in_lr;
}


