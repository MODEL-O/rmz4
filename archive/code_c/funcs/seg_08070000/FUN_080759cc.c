// undefined FUN_080759cc(void)
// entry 0x80759cc


undefined4 FUN_080759cc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08075a14);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x72) < '\x02') {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x54) - *(int *)(*(char *)(param_1 + 0x71) * 4 + DAT_08075a54);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + *(int *)(*(char *)(param_1 + 0x71) * 4 + DAT_08075a18);
    }
    *(int *)(param_1 + 0x54) = iVar1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


