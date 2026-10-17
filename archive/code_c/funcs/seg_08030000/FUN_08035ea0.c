// undefined FUN_08035ea0(void)
// entry 0x8035ea0


undefined4 FUN_08035ea0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,0x1900);
    FUN_0803c464(param_1,5);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    FUN_0803a3b0(param_1,0x1900);
    if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(uint *)(param_1 + 600) & 0x80) == 0) {
        uVar1 = 3;
        iVar2 = DAT_08035f24;
      }
      else {
        uVar1 = 2;
        iVar2 = DAT_08035f08;
      }
      *(undefined1 *)(param_1 + iVar2) = uVar1;
      *(undefined1 *)(param_1 + 0x102) = 0;
    }
  }
  return in_lr;
}


