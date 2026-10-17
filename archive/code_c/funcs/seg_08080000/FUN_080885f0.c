// undefined FUN_080885f0(void)
// entry 0x80885f0


undefined4 FUN_080885f0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08088638);
    FUN_0801cf00(param_1,DAT_0808863c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d1f4(param_1);
  iVar2 = FUN_08088c9c(param_1);
  if (iVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0x20;
    if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
      uVar1 = 8;
    }
    else {
      bVar3 = 0;
      uVar1 = 7;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar1;
    *(byte *)(param_1 + 0xe) = bVar3;
    *(byte *)(param_1 + 0xf) = bVar3;
  }
  return in_lr;
}


