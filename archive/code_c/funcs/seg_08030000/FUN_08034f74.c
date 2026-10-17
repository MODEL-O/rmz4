// undefined FUN_08034f74(void)
// entry 0x8034f74


undefined4 FUN_08034f74(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cfc8(param_1,0x1600,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    pcVar2 = (char *)(param_1 + DAT_08034fb4);
    *pcVar2 = '\x0e';
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1600);
    pcVar2 = (char *)(param_1 + DAT_08035004);
  }
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    *(undefined1 *)(param_1 + 0x100) = 0;
    FUN_0801cfc8(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  return in_lr;
}


