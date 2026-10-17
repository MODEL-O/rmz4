// undefined FUN_08038108(void)
// entry 0x8038108


undefined4 FUN_08038108(int param_1,byte param_2)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (param_2 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0803811c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)param_2 * 4 + DAT_08038120))();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  *(undefined1 *)(param_1 + 0x11) = 0xff;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined1 *)(param_1 + 0x19) = 0xff;
  *(undefined1 *)(param_1 + 0x1a) = 0xff;
  *(undefined1 *)(param_1 + 0x1b) = 0xff;
  *(short *)(param_1 + 0x16) = (short)DAT_08038230;
  *(undefined2 *)(param_1 + 0x20) = 1;
  *(undefined2 *)(param_1 + 0x22) = 0x200;
  *(undefined2 *)(param_1 + 0x24) = 2;
  *(undefined2 *)(param_1 + 0x26) = 0x100;
  *(undefined2 *)(param_1 + 0x28) = 4;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 0xff;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0x40;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0xff;
  *(byte *)(param_1 + 0x13) = param_2 + 4;
  return in_lr;
}


