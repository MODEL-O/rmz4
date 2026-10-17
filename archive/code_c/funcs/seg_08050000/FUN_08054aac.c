// undefined FUN_08054aac(void)
// entry 0x8054aac


undefined4 FUN_08054aac(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    FUN_0801cf00(param_1,0x2c00);
    FUN_0805516c(param_1,0xc,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = FUN_08055188(param_1,*(undefined4 *)(param_1 + 0xb8));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xb7) = 0;
    *(undefined1 *)(param_1 + 0xe) = 4;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


