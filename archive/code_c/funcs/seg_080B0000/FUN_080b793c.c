// undefined FUN_080b793c(void)
// entry 0x80b793c


undefined4 FUN_080b793c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  uVar1 = *(undefined1 *)(param_1 + 0x12);
  cVar2 = FUN_08129198(uVar1,0xc);
  if (cVar2 == '\0') {
    cVar2 = FUN_08129120(uVar1,0xc);
    FUN_080a21b4(param_1 + 0x54,cVar2 + -1,*(undefined1 *)(param_1 + 0xb4));
  }
  else {
    FUN_080e12bc(param_1 + 0x54,*(undefined1 *)(param_1 + 0xb4),param_1 + 0xb5);
  }
  return in_lr;
}


