// undefined FUN_080ac81c(void)
// entry 0x80ac81c


undefined4 FUN_080ac81c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined1 *)(param_1 + 0xb8) = 1;
    FUN_0801cf00(param_1,0xb000);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_080acb5c(param_1);
  *(bool *)(param_1 + 0xb4) = *(char *)(param_1 + 0x73) == '\x04';
  return in_lr;
}


