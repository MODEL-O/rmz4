// undefined FUN_08076c8c(void)
// entry 0x8076c8c


undefined4 FUN_08076c8c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08076cb4);
    FUN_08002b10(0xdc);
    uVar2 = DAT_08076cd0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = DAT_08076cd4;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar4 = (char *)(param_1 + 0x71);
    if ((*pcVar4 < '\x03') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(param_1 + 0x54) - *(int *)(*pcVar4 * 4 + DAT_08076d6c);
      }
      else {
        iVar3 = *(int *)(param_1 + 0x54) + *(int *)(*pcVar4 * 4 + DAT_08076d10);
      }
      *(int *)(param_1 + 0x54) = iVar3;
    }
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08076d70);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      FUN_080cbf7c(param_1,3,0x84);
      FUN_080cbf7c(param_1,3,0x90);
    }
    else {
      FUN_080cbf7c(param_1,3,0xfc);
      FUN_080cbf7c(param_1,3,0xf0);
    }
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0xd9) = 2;
    if (*(char *)(param_1 + 0x71) < '\x03') {
      return in_lr;
    }
  }
  else {
    if (cVar1 != '\x02') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 0x17;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    if (*(char *)(param_1 + 0x71) < '\x05') {
      return in_lr;
    }
    FUN_08005784(param_1 + 0x74,DAT_08076de0);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


