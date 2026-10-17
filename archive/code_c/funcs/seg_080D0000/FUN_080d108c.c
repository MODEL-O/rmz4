// undefined FUN_080d108c(void)
// entry 0x80d108c


undefined4 FUN_080d108c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d10cc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    *(uint *)(param_1 + 0x78) = iVar1 - 1U;
    if (iVar1 < 0x20) {
      if ((iVar1 - 1U & 1) == 0) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      }
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d10e4));
  }
  return in_lr;
}


