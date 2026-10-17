// undefined FUN_0808d078(void)
// entry 0x808d078


undefined4 FUN_0808d078(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = DAT_0808d0cc;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar3 + 0xb4) = *(int *)(*DAT_0808d0cc + 0x54) - *(int *)(iVar3 + 0x54);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x38);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar1 != 0)) {
      uVar2 = FUN_0803a578(*piVar1,6,1);
      *(undefined1 *)(iVar3 + 0x13) = uVar2;
    }
  }
  return in_lr;
}


