// undefined FUN_0808c828(void)
// entry 0x808c828


undefined4 FUN_0808c828(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x2c);
    uVar1 = (uint)*(byte *)(param_1 + 0xb4);
    local_10 = *(int *)(param_1 + 0x54) +
               *(short *)((uVar1 + 0x40 & 0xff) * 2 + DAT_0808c8b0) * 0x14;
    local_c = *(int *)(param_1 + 0x58) + *(short *)(uVar1 * 2 + DAT_0808c8b0) * 0x14;
    FUN_080bd4d4(&local_10,0x200,uVar1 + 0x80 & 0xff);
    FUN_0801cf00(param_1,DAT_0808c8b4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


