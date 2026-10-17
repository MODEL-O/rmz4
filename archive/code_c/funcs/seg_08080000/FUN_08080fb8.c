// undefined FUN_08080fb8(void)
// entry 0x8080fb8


undefined4 FUN_08080fb8(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar1 = DAT_08081068 * *DAT_08081064 + DAT_0808106c;
  local_1c = (((uVar1 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100 + *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_08081070;
  uVar1 = DAT_08081068 * (uVar1 & 0x7fffffff) + DAT_0808106c;
  *DAT_08081064 = uVar1 & 0x7fffffff;
  local_18 = (((uVar1 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100 + local_18;
  FUN_080d0c88(1,&local_1c);
  FUN_0802ab88(4,0x22,param_1 + 0x54);
  if (*(ushort *)(DAT_08081074 + 0xc) <= DAT_08081078) {
    *(ushort *)(DAT_08081074 + 0xc) = *(ushort *)(DAT_08081074 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808107c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


