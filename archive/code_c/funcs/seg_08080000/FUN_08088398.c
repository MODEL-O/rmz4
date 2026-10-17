// undefined FUN_08088398(void)
// entry 0x8088398


undefined4 FUN_08088398(int param_1)

{
  undefined4 in_lr;
  
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(*DAT_080883c4 + 0x54)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_080883e4));
  return in_lr;
}


