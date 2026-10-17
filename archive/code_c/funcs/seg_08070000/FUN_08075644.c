// undefined FUN_08075644(void)
// entry 0x8075644


undefined4 FUN_08075644(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = *DAT_0807567c * DAT_08075680 + DAT_08075684;
    *DAT_0807567c = uVar5 & 0x7fffffff;
    uVar5 = (uVar5 & 0x7fffffff) >> 0x10 & 0x1f;
    FUN_0801cf00(param_1,DAT_08075688);
    FUN_08002b10(0xdd);
    if (uVar5 < 0xc) {
      uVar2 = 2;
    }
    else if (uVar5 < 0x18) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    *(undefined1 *)(param_1 + 0xde) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar7 = (char *)(param_1 + 0x71);
    if (*(char *)(param_1 + 0x72) < '\x02') {
      bVar1 = *(byte *)(param_1 + 10);
      if ((bVar1 & 0x10) == 0) {
        iVar6 = *(int *)(param_1 + 0x54) + *(int *)(*pcVar7 * 4 + DAT_08075714);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x54) - *(int *)(*pcVar7 * 4 + DAT_080756dc);
      }
      *(int *)(param_1 + 0x54) = iVar6;
      if ((*pcVar7 == '\a') &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1)) {
        *(undefined1 *)(param_1 + 0xd) = 3;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if ((*pcVar7 == '\x03') || (*pcVar7 == '\a')) {
        if ((bVar1 & 0x10) == 0) {
          sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + DAT_08075768,
                               *(undefined4 *)(param_1 + 0x58));
          if (sVar4 != 0) {
            *(undefined1 *)(param_1 + 0xd) = 3;
            *(byte *)(param_1 + 0xe) = bVar1 & 0x10;
            return in_lr;
          }
        }
        else {
          sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + 0x1400,*(undefined4 *)(param_1 + 0x58));
          if (sVar4 != 0) {
            *(undefined1 *)(param_1 + 0xd) = 3;
            *(undefined1 *)(param_1 + 0xe) = 0;
            return in_lr;
          }
        }
      }
    }
  }
  FUN_0801cff0(param_1);
  if (((*(char *)(param_1 + 0x71) == '\x03') || (*(char *)(param_1 + 0x71) == '\a')) &&
     (*(char *)(param_1 + 0x72) == '\x01')) {
    FUN_08002b10(0xde);
  }
  return in_lr;
}


