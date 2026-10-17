// undefined FUN_080824d4(void)
// entry 0x80824d4


undefined4 FUN_080824d4(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = DAT_0808252c;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar3 + 0xb4) = *(int *)(*DAT_0808252c + 0x54) - *(int *)(iVar3 + 0x54);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0xb);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar1 != 0)) {
      uVar2 = FUN_0803a578(*piVar1,3,1);
      *(undefined1 *)(iVar3 + 0xbc) = uVar2;
    }
  }
  return in_lr;
}


