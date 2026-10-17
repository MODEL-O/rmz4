// undefined FUN_0809923c(void)
// entry 0x809923c


undefined4 FUN_0809923c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809928c);
    FUN_08002b10(DAT_08099290);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(int *)(param_1 + 0xb4) < 5) {
      uVar2 = 0;
    }
    else {
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


