// undefined FUN_08033d8c(void)
// entry 0x8033d8c


undefined4 FUN_08033d8c(int param_1)

{
  uint uVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08033e08);
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_08033e08;
  FUN_0803a3b0(param_1,DAT_08033e08);
  if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != uVar1) {
    FUN_0801cfc8(param_1,uVar1,*(undefined1 *)(param_1 + 0x16e),*(undefined1 *)(param_1 + 0x16f));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  return in_lr;
}


