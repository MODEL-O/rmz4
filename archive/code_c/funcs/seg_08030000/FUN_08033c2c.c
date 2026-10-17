// undefined FUN_08033c2c(void)
// entry 0x8033c2c


undefined4 FUN_08033c2c(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,0x1100);
  }
  else {
    FUN_0803a3b0(param_1,0x1100);
    if ((*pcVar2 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_08033c74;
    FUN_0803c464(param_1,0xc);
  }
  *pcVar2 = *pcVar2 + '\x01';
LAB_08033c74:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  return in_lr;
}


