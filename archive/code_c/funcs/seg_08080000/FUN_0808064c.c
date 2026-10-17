// undefined FUN_0808064c(void)
// entry 0x808064c


undefined4 FUN_0808064c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x10);
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xc0) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_080806ac != 0)) {
      uVar1 = FUN_0803a578(*DAT_080806ac,5,0);
      *(undefined1 *)(iVar2 + 0xc3) = uVar1;
    }
  }
  return in_lr;
}


