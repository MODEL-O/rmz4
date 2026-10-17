// undefined FUN_080354d4(void)
// entry 0x80354d4


undefined4 FUN_080354d4(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar2 == DAT_080354f8) {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      FUN_0801cfc8(param_1,uVar2,2,2);
    }
  }
  else {
    FUN_0801cfc8(param_1,DAT_080354f8,2,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cf00(param_1,0x300);
  }
  cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 3;
    *(undefined1 *)(param_1 + 0x101) = 0;
    FUN_080353a0(param_1);
  }
  return in_lr;
}


