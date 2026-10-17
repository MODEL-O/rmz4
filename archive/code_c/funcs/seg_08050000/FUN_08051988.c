// undefined FUN_08051988(void)
// entry 0x8051988


undefined4 FUN_08051988(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080519d8);
    FUN_0801cf00(param_1,DAT_080519dc);
    FUN_0801fe64(4,param_1 + 0x54);
    FUN_080c1a78(*(int *)(param_1 + 0x54) + DAT_080519e0,*(undefined4 *)(param_1 + 0xb8),0,8);
    FUN_080c1a78(*(int *)(param_1 + 0x54) + 0x1800,*(undefined4 *)(param_1 + 0xb8),1,8);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0xe) != '\x01') || (*(char *)(param_1 + 0x71) < '\x02'))
    goto LAB_08051a06;
    FUN_08005784(param_1 + 0x74,DAT_08051a34);
  }
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_08051a06:
  FUN_0801cff0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((0x18 < bVar1) && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


