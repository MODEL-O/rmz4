// undefined FUN_08091a68(void)
// entry 0x8091a68


undefined4 FUN_08091a68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *DAT_08091adc;
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08091ae0);
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x71) == '\0') && (*(char *)(param_1 + 0x72) < '\x02')) {
    FUN_08002b10(0x37);
  }
  *(undefined2 *)(iVar2 + 0xd2) = 0x10;
  if ((iVar1 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) {
    *(undefined2 *)(iVar2 + 0xd2) = 0x3c;
    *(undefined1 *)(param_1 + 0xd) = 5;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return in_lr;
}


