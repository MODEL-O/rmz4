// undefined FUN_08036cf8(void)
// entry 0x8036cf8


undefined4 FUN_08036cf8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_08036d34;
  FUN_0803a3b0(param_1,DAT_08036d34);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + DAT_08036d38) == '\x02') {
    *(undefined1 *)(param_1 + DAT_08036d3c) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08036d40(param_1);
  }
  return in_lr;
}


