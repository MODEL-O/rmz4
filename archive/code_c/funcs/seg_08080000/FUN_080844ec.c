// undefined FUN_080844ec(void)
// entry 0x80844ec


undefined4 FUN_080844ec(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar1 = *(int *)(param_1 + 0x58) + DAT_0808451c;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0x7f;
  }
  return in_lr;
}


