// undefined FUN_0808e8a0(void)
// entry 0x808e8a0


undefined4 FUN_0808e8a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  iVar1 = FUN_080d0c88(1,param_1 + 0x54);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x49) = *(byte *)(iVar1 + 0x49) | 0xc;
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808e8f0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


