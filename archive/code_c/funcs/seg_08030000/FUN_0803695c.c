// undefined FUN_0803695c(void)
// entry 0x803695c


undefined4 FUN_0803695c(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_08036990;
  FUN_0803a3b0(param_1,DAT_08036990);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0xe) == '\x01') {
      FUN_0801cfc8(param_1,DAT_08036994,2,1);
    }
    else {
      FUN_0801cfc8(param_1,DAT_080369b4,2,1);
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


