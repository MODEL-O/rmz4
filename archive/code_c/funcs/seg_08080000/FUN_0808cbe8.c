// undefined FUN_0808cbe8(void)
// entry 0x808cbe8


undefined4 FUN_0808cbe8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_08002b10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  local_10 = *(undefined4 *)(param_1 + 0x54);
  local_c = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(1,&local_10);
  FUN_0808ce0c(param_1);
  FUN_0802ab88(3,0,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808cc38);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


