// undefined FUN_080478d0(void)
// entry 0x80478d0


undefined4 FUN_080478d0(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cd28();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_08047924);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08047928,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804792c;
  FUN_08002b10(0x45);
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


