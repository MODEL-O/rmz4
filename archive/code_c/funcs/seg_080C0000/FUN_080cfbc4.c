// undefined FUN_080cfbc4(void)
// entry 0x80cfbc4


undefined4 FUN_080cfbc4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x1000;
    *(int *)(param_1 + 0x5c) = iVar1;
    *(int *)(param_1 + 100) = iVar1 - *(int *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb8) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar2 = (int *)(param_1 + 0xb8);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  iVar1 = (iVar1 + -1) * -*(int *)(param_1 + 100);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3f;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x5c) + (iVar1 >> 6);
  if (*piVar2 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


