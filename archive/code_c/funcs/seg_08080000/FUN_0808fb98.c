// undefined FUN_0808fb98(void)
// entry 0x808fb98


undefined4 FUN_0808fb98(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_0808fbd4;
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar3 = 0x1c;
  iVar4 = 1;
  do {
    FUN_080d4c8c(&local_1c,iVar3 + iVar1,0,uVar2 | uVar2 << 4);
    iVar3 = iVar3 + 0x1c;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}


