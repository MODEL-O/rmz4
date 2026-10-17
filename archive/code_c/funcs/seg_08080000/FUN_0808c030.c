// undefined FUN_0808c030(void)
// entry 0x808c030


undefined4 FUN_0808c030(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c0bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0x25) = *(char *)(iVar2 + 0x25) + '\x01';
  FUN_0801cf00(param_1,DAT_0808c0c0);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
  FUN_0808c0c4(param_1);
  return in_lr;
}


