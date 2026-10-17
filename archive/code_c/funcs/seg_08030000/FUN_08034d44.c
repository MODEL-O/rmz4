// undefined FUN_08034d44(void)
// entry 0x8034d44


undefined4 FUN_08034d44(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar2 != DAT_08034d80) {
    if (uVar2 == DAT_08034d84) {
      FUN_0801cfc8(param_1,DAT_08034d80,(short)*(char *)(param_1 + 0x71),
                   (short)*(char *)(param_1 + 0x72));
    }
    else {
      FUN_0801cfc8(param_1,DAT_08034d80,0,1);
    }
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cfc8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_08034b48(param_1);
  }
  return in_lr;
}


