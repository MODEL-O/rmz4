// undefined FUN_08037da8(void)
// entry 0x8037da8


undefined4 FUN_08037da8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar2 == DAT_08037dcc) {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      FUN_0801cfc8(param_1,uVar2,2,2);
    }
  }
  else {
    FUN_0801cfc8(param_1,DAT_08037dcc,2,2);
  }
  if (*(char *)(param_1 + 0x154) == '\x04') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cf00(param_1,DAT_08037e0c);
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    cVar1 = FUN_08039fd8(param_1,param_1 + 0x144);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x100) = 3;
      *(undefined1 *)(param_1 + 0x101) = 0;
      FUN_08037c60(param_1);
    }
  }
  return in_lr;
}


