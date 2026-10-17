// undefined FUN_0807e4f8(void)
// entry 0x807e4f8


undefined4 FUN_0807e4f8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x3800;
  iVar1 = *(int *)(param_1 + 0xb4) + *(int *)(DAT_0807e550 + 8) + 0x7800;
  *(int *)(param_1 + 200) = iVar1;
  *(bool *)(param_1 + 0xbe) = iVar1 < *(int *)(*DAT_0807e554 + 0x54);
  *(undefined1 *)(param_1 + 0xd) = 0xc;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_0807e558 + 0x30));
  return in_lr;
}


