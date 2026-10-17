// undefined FUN_080fb904(void)
// entry 0x80fb904


undefined4 FUN_080fb904(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar2 + 8) == '\0') {
    uVar1 = DAT_080fb934;
    if (*(char *)(iVar3 + 0x10) == '\0') {
      uVar1 = 0x708;
    }
    *(undefined4 *)(iVar2 + 0xec) = uVar1;
    *(undefined1 *)(iVar3 + 0xbd) = 1;
  }
  return in_lr;
}


