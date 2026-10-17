// undefined FUN_08034ee4(void)
// entry 0x8034ee4


undefined4 FUN_08034ee4(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cfc8(param_1,0x1500,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
    FUN_0803c464(param_1,3);
    pcVar2 = (char *)(param_1 + DAT_08034f2c);
    *pcVar2 = '\x02';
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1500);
    pcVar2 = (char *)(param_1 + DAT_08034f6c);
  }
  cVar1 = *pcVar2;
  *pcVar2 = cVar1 + -1;
  if ((char)(cVar1 + -1) == -1) {
    *(undefined1 *)(param_1 + DAT_08034f70) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08034f74(param_1);
  }
  return in_lr;
}


