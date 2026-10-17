// undefined FUN_0808aff4(void)
// entry 0x808aff4


undefined4 FUN_0808aff4(int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 in_lr;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1c00;
  }
  local_2c = *(undefined4 *)(param_1 + 0x54);
  local_28 = *(int *)(param_1 + 0x58) + DAT_0808b110;
  FUN_080d0c88(1,&local_2c);
  pcVar3 = (char *)(param_1 + 0xb4);
  FUN_08002b10(0x2a);
  FUN_0802ab88(3,0x1d,param_1 + 0x54);
  uVar1 = *DAT_0808b114 * DAT_0808b118 + DAT_0808b11c;
  *DAT_0808b114 = uVar1 & 0x7fffffff;
  uVar1 = (uVar1 & 0x7fffffff) >> 0x10 & 3;
  local_24 = *(undefined4 *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d8ef8(&local_24,*pcVar3 == '\0',DAT_0808b120,uVar1,1);
  FUN_080d8ef8(&local_24,*pcVar3 == '\0',DAT_0808b124,uVar1,1);
  FUN_080d8ef8(&local_24,*pcVar3 == '\0',DAT_0808b128,uVar1,1);
  if (*(ushort *)(DAT_0808b12c + 0xc) <= DAT_0808b130) {
    *(ushort *)(DAT_0808b12c + 0xc) = *(ushort *)(DAT_0808b12c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808b134);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


