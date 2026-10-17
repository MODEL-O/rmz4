// undefined FUN_080677e0(void)
// entry 0x80677e0


undefined4 FUN_080677e0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806782c);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) << 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    iVar2 = iVar2 + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar2;
    uVar1 = *(byte *)(param_1 + 10) & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar2 < 0) goto LAB_08067834;
    }
    else if (0 < iVar2) {
      uVar1 = 0;
LAB_08067834:
      *(uint *)(param_1 + 0x5c) = uVar1;
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar3 = DAT_08067854;
    if (*(char *)(param_1 + 0x71) < '\x02') goto LAB_0806787a;
  }
  else if ((*(char *)(param_1 + 0xf) != '\x01') ||
          (uVar3 = DAT_08067890, *(char *)(param_1 + 0x71) < '\x04')) goto LAB_0806787a;
  FUN_08005784(param_1 + 0x74,uVar3);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0806787a:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


