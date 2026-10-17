// undefined FUN_08112ad8(void)
// entry 0x8112ad8


undefined4 FUN_08112ad8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_08006d80();
  uVar1 = DAT_08112b48;
  FUN_08128be0(param_1 + 0x1ee0,DAT_08112b48,0);
  FUN_08128be4(param_1 + 0x1ee0,uVar1,DAT_08112b4c);
  uVar1 = DAT_08112b54;
  FUN_08128be0(param_1 + DAT_08112b50,DAT_08112b54,0);
  FUN_08128be4(param_1 + DAT_08112b50,uVar1,DAT_08112b58);
  FUN_08128be0(param_1 + DAT_08112b5c,DAT_08112b60,0x1000);
  iVar2 = DAT_08112b68;
  FUN_08128be0(param_1 + DAT_08112b64,DAT_08112b68,0x80);
  *(short *)(iVar2 + DAT_08112b6c) = (short)*(undefined4 *)(param_1 + DAT_08112b70);
  return in_lr;
}


