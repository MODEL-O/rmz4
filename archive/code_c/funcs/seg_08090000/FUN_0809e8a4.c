// undefined FUN_0809e8a4(void)
// entry 0x809e8a4


undefined4 FUN_0809e8a4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) - iVar3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    iVar2 = *(int *)(param_1 + 0x54) + iVar3;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  if (iVar3 == 0x200) {
    FUN_0801d1f4(param_1);
  }
  else if (iVar3 == 0x100) {
    FUN_0801cff0(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x12) + '\x01';
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '!') {
    FUN_0801cf00(param_1,DAT_0809e90c);
    *(undefined1 *)(param_1 + 0xd) = 2;
  }
  if (*(char *)(param_1 + 0x12) == '\x10') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
  }
  return in_lr;
}


