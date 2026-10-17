// undefined FUN_08075b10(void)
// entry 0x8075b10


undefined4 FUN_08075b10(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075b34);
    FUN_08002b10(0xd7);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x71);
    if ((*pcVar3 < '\x02') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54) - *(int *)(*pcVar3 * 4 + DAT_08075bc0);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54) + *(int *)(*pcVar3 * 4 + DAT_08075b70);
      }
      *(int *)(param_1 + 0x54) = iVar2;
    }
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08075bc4);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      FUN_080cbf7c(param_1,3,0x80);
    }
    else {
      FUN_080cbf7c(param_1,3,0);
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 10;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xd9) = 1;
    if (*(char *)(param_1 + 0x71) < '\x05') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08075c00);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


