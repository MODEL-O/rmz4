// undefined FUN_08081080(void)
// entry 0x8081080


undefined4 FUN_08081080(int param_1)

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
  uVar1 = DAT_08081130 * *DAT_0808112c + DAT_08081134;
  local_1c = (((uVar1 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100 + *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + DAT_08081138;
  uVar1 = DAT_08081130 * (uVar1 & 0x7fffffff) + DAT_08081134;
  *DAT_0808112c = uVar1 & 0x7fffffff;
  local_18 = (((uVar1 & 0x7fffffff) >> 0x10 & 0xf) - 7) * 0x100 + local_18;
  FUN_080d0c88(1,&local_1c);
  FUN_0802ab88(4,0x22,param_1 + 0x54);
  if (*(ushort *)(DAT_0808113c + 0xc) <= DAT_08081140) {
    *(ushort *)(DAT_0808113c + 0xc) = *(ushort *)(DAT_0808113c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08081144);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


