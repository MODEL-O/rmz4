// undefined FUN_080f7efc(void)
// entry 0x80f7efc


undefined4 FUN_080f7efc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x58) + 0x120;
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) < iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return in_lr;
}


