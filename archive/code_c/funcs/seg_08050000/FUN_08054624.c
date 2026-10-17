// undefined FUN_08054624(void)
// entry 0x8054624


undefined4 FUN_08054624(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    FUN_0801cf00(param_1,0x2c00);
    FUN_0805516c(param_1,0xc,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = FUN_08055188(param_1,*(int *)(param_1 + 0xbc) + DAT_0805467c);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x54) == *(int *)(param_1 + 0xc0)) {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


