// undefined FUN_08006a6c(void)
// entry 0x8006a6c


undefined4 FUN_08006a6c(uint param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08006a90;
  piVar2 = (int *)((param_1 & 0xff) * 4 + DAT_08006a90 + 0x1c);
  if (*piVar2 != param_2) {
    *piVar2 = param_2;
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return in_lr;
}


