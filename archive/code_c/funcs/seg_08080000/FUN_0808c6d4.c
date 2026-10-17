// undefined FUN_0808c6d4(void)
// entry 0x808c6d4


undefined4 FUN_0808c6d4(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  char acStack_1c [8];
  
  FUN_08129258(acStack_1c,DAT_0808c750,8);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x2400);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = FUN_08128f80(param_1,*(undefined4 *)(uVar4 * 4 + DAT_0808c754));
  cVar1 = acStack_1c[iVar3 + uVar4 * 2] + *(char *)(uVar4 + DAT_0808c758);
  iVar3 = FUN_0801fb14(DAT_0808c75c,param_1 + 0x54);
  if (iVar3 == 0) {
    cVar2 = FUN_0810d398(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(*DAT_0808c7ac + 0x54),
                         *(int *)(*DAT_0808c7ac + 0x58) + DAT_0808c7b0);
    iVar3 = FUN_0808cd3c(param_1,cVar2);
    if (iVar3 != 0) {
      cVar1 = FUN_0808ccc8(param_1,cVar2);
      *(char *)(param_1 + 0xb4) = cVar1;
      *(char *)(param_1 + 0x24) = cVar1 + -0x80;
      if (*(char *)(param_1 + 0xb4) != cVar2) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    cVar1 = FUN_0808ccc8(param_1,cVar1);
    *(char *)(param_1 + 0xb4) = cVar1;
  }
  else {
    if (*(char *)(param_1 + 0xb4) == cVar1) {
      return in_lr;
    }
    cVar1 = FUN_0808ccc8(param_1,cVar1);
    *(char *)(param_1 + 0xb4) = cVar1;
  }
  *(char *)(param_1 + 0x24) = cVar1 + -0x80;
  return in_lr;
}


