// undefined FUN_0808549c(void)
// entry 0x808549c


undefined8 FUN_0808549c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080854f0);
  iVar2 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x100);
  return CONCAT44(in_lr,(uint)(0 < iVar1 && iVar2 < 0));
}


