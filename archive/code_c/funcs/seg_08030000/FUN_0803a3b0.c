// undefined FUN_0803a3b0(void)
// entry 0x803a3b0


undefined4 FUN_0803a3b0(int param_1,short param_2)

{
  undefined4 in_lr;
  
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != param_2) &&
     (*(short *)(param_1 + 0x16c) == param_2)) {
    FUN_0801cfc8(param_1,*(short *)(param_1 + 0x16c),*(undefined1 *)(param_1 + 0x16e),
                 *(undefined1 *)(DAT_0803a3ec + param_1));
  }
  return in_lr;
}


