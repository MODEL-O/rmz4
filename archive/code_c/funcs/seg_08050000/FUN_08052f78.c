// undefined FUN_08052f78(void)
// entry 0x8052f78


undefined4 FUN_08052f78(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    FUN_08006984(0x42);
    iVar2 = *(int *)(param_1 + 0x2c);
    *(bool *)(iVar2 + 0xd4) =
         *(int *)(iVar2 + 0x54) < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    if ((((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (*DAT_08052fdc != 0)) &&
       ((byte)(*(char *)(iVar2 + 0xd) - 0x12U) < 7)) {
      uVar1 = FUN_0803a578(*DAT_08052fdc,8,0);
      *(undefined1 *)(iVar2 + 0xd9) = uVar1;
    }
  }
  return in_lr;
}


