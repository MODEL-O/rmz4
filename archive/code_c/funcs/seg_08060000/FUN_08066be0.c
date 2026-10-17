// undefined FUN_08066be0(void)
// entry 0x8066be0


undefined4 FUN_08066be0(int param_1)

{
  undefined4 uVar1;
  int unaff_r5;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 in_stack_0000001c;
  
  if (param_1 != 0) {
    uStack00000008 = 0;
    uStack0000000c = 0;
    if (*(char *)(unaff_r5 + 0xf) == '\0') {
      uStack0000000c = DAT_08066c04;
    }
    uVar1 = FUN_080d296c(unaff_r5,&stack0x00000008);
    *(undefined4 *)(unaff_r5 + 0x2c) = uVar1;
    *(undefined1 *)(unaff_r5 + 0xd) = 2;
  }
  return in_stack_0000001c;
}


