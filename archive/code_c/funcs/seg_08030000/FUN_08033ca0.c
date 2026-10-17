// undefined FUN_08033ca0(void)
// entry 0x8033ca0


undefined4 FUN_08033ca0(int param_1)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  pcVar2 = (char *)(param_1 + 0x102);
  if (*pcVar2 == '\0') {
    FUN_0801cf00(param_1,0x1300);
  }
  else {
    FUN_0803a3b0(param_1,0x1300);
    if ((*pcVar2 != '\x01') || ('\x01' < *(char *)(param_1 + 0x72))) goto LAB_08033ce8;
    FUN_0803c464(param_1,0xd);
  }
  *pcVar2 = *pcVar2 + '\x01';
LAB_08033ce8:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  return in_lr;
}


