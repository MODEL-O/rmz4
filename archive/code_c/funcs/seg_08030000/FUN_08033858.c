// undefined FUN_08033858(void)
// entry 0x8033858


undefined4 FUN_08033858(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_14 [4];
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    FUN_0801cf00(param_1,0xe00);
    *(undefined1 *)(param_1 + 0x146) = 0;
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    if ((*pcVar3 == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
      FUN_0803c464(param_1,0);
      *pcVar3 = *pcVar3 + '\x01';
    }
    if (1 < *(byte *)(param_1 + 0x102)) {
      *(byte *)(param_1 + DAT_08033938) = *(byte *)(param_1 + DAT_08033938) | 2;
    }
    cVar1 = FUN_08039fd8(param_1,local_14);
    if ((cVar1 != '\0') && (local_14[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    FUN_0803a3b0(param_1,0xe00);
  }
  if ((((*(char *)(param_1 + 199) == '\x01') &&
       ((*(ushort *)(param_1 + DAT_0803393c) & 0x8000) == 0)) ||
      (*(char *)(param_1 + 0x71) < '\x04')) || (*(char *)(param_1 + 0x146) == '\0')) {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0x100) = 0;
      uVar2 = FUN_0802b7d8(param_1);
      FUN_0801cf00(param_1,uVar2);
    }
  }
  else {
    *(undefined1 *)(param_1 + DAT_08033940) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08033974(param_1);
  }
  return in_lr;
}


