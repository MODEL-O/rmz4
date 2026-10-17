// undefined FUN_0808b85c(void)
// entry 0x808b85c


undefined4 FUN_0808b85c(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_08002b10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar1 = DAT_0808b918 * *DAT_0808b914 + DAT_0808b91c;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_0808b918 * (uVar1 & 0x7fffffff) + DAT_0808b91c;
  *DAT_0808b914 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100 +
             DAT_0808b920;
  FUN_080d0c88(1,&local_1c);
  FUN_0808bd6c(param_1);
  FUN_0802ab88(3,9,param_1 + 0x54);
  if (*(ushort *)(DAT_0808b924 + 0xc) <= DAT_0808b928) {
    *(ushort *)(DAT_0808b924 + 0xc) = *(ushort *)(DAT_0808b924 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808b92c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


