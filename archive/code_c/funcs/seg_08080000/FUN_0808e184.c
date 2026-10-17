// undefined FUN_0808e184(void)
// entry 0x808e184


undefined4 FUN_0808e184(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808e1c4));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808e1ac);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0808e6e0(param_1);
  }
  return in_lr;
}


