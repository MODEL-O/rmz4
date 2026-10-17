// undefined FUN_0808a110(void)
// entry 0x808a110


undefined4 FUN_0808a110(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  piVar1 = DAT_0808a170;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(bool *)(iVar3 + 0xb4) = 0 < *(int *)(*DAT_0808a170 + 0x54) - *(int *)(iVar3 + 0x54);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x20);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar1 != 0)) {
      uVar2 = FUN_0803a578(*piVar1,3,8);
      *(undefined1 *)(iVar3 + 0xc3) = uVar2;
    }
  }
  return in_lr;
}


