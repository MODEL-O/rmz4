// undefined FUN_08051790(void)
// entry 0x8051790


undefined4 FUN_08051790(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080517d8);
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    *(undefined4 *)(param_1 + 0x60) = 0x80;
    *(bool *)(param_1 + 0xf) = *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x54) - iVar2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x54) + iVar2;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  iVar3 = *(int *)(param_1 + 0xb8) + DAT_08051808;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0x58) = iVar3;
    *(undefined1 *)(param_1 + 0xd) = 10;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = iVar2 + 0x20;
    if (iVar2 + 0x20 <= DAT_08051834) {
      *(int *)(param_1 + 0x5c) = DAT_08051834 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 <= DAT_08051838) {
      *(int *)(param_1 + 0x60) = DAT_08051838 + 1;
    }
  }
  return in_lr;
}


