// undefined FUN_0808fe78(void)
// entry 0x808fe78


undefined4 FUN_0808fe78(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0808ff00;
  iVar2 = DAT_0808fefc;
  puVar1 = DAT_0808fef8;
  uVar4 = DAT_0808fefc * *DAT_0808fef8 + DAT_0808ff00;
  *DAT_0808fef8 = uVar4 & 0x7fffffff;
  for (iVar7 = ((uVar4 & 0x7fffffff) >> 0x10 & 1) + 4; iVar7 != 0; iVar7 = iVar7 + -1) {
    uVar4 = iVar2 * *puVar1 + iVar3;
    iVar5 = *(int *)(param_1 + 0x54);
    uVar6 = iVar2 * (uVar4 & 0x7fffffff) + iVar3;
    *puVar1 = uVar6 & 0x7fffffff;
    FUN_080d0ff4(iVar5 + (((uVar4 & 0x7fffffff) >> 0x10 & 0x1f) - 0xf) * 0x100,
                 *(int *)(param_1 + 0x58) + (((uVar6 & 0x7fffffff) >> 0x10 & 0x1f) - 0xf) * 0x100,0)
    ;
  }
  return in_lr;
}


