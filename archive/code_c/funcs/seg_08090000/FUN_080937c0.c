// undefined FUN_080937c0(void)
// entry 0x80937c0


undefined4 FUN_080937c0(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  uVar1 = FUN_08094db4();
  *(undefined1 *)(param_1 + 0xb8) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)(DAT_080937e8 + 4));
  return in_lr;
}


