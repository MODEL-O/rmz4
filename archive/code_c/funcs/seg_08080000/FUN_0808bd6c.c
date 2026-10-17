// undefined FUN_0808bd6c(void)
// entry 0x808bd6c


undefined4 FUN_0808bd6c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0808bda8;
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 0;
  iVar3 = 2;
  do {
    FUN_080d4c8c(&local_1c,iVar4 + iVar1,0,uVar2 | uVar2 << 4);
    iVar4 = iVar4 + 0x1c;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  return in_lr;
}


