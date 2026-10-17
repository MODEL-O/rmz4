// undefined FUN_0809f620(void)
// entry 0x809f620


undefined4 FUN_0809f620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_0809f664);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    uVar1 = 2;
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


