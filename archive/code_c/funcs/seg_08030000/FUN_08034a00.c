// undefined FUN_08034a00(void)
// entry 0x8034a00


undefined4 FUN_08034a00(int param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,DAT_08034a5c);
    *pcVar3 = *pcVar3 + '\x01';
  }
  uVar1 = DAT_08034a5c;
  FUN_0803a3b0(param_1,DAT_08034a5c);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar2 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar2);
  }
  return in_lr;
}


