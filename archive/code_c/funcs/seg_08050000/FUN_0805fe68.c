// undefined FUN_0805fe68(void)
// entry 0x805fe68


undefined4 FUN_0805fe68(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0805fea0);
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xf;
    }
    *(int *)(param_1 + 100) = iVar4 >> 4;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\0') goto LAB_0805ffca;
    iVar4 = *DAT_0805ffa0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  else {
    if (1 < bVar2) {
      if ((bVar2 == 2) &&
         (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0'))
      {
        *(undefined1 *)(param_1 + 0xd) = 2;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
      goto LAB_0805ffca;
    }
    if (bVar2 != 0) goto LAB_0805ffca;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_0805ffca;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x11) = 2;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    FUN_08005784(param_1 + 0x74,DAT_0805ff38);
    if ((bool)(~(*(byte *)(param_1 + 10) >> 4) & 1) !=
        *(int *)(param_1 + 0x54) < *(int *)(*DAT_0805ff3c + 0x54)) {
      FUN_0801cf00(param_1,0xa500);
      *(undefined1 *)(param_1 + 0x12) = 4;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x02';
      goto LAB_0805ffca;
    }
    FUN_0801cf00(param_1,DAT_0805ff4c);
  }
  *(undefined1 *)(param_1 + 0x12) = 2;
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805ffca:
  FUN_0801cff0(param_1);
  return in_lr;
}


