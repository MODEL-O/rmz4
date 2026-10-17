// undefined FUN_08100048(void)
// entry 0x8100048


undefined4 FUN_08100048(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0xbc) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*DAT_081000a0 != 0)) {
      uVar1 = FUN_0803a578(*DAT_081000a0,3,0x12);
      *(undefined1 *)(iVar2 + 0xbd) = uVar1;
    }
  }
  return in_lr;
}


