// undefined FUN_08084da0(void)
// entry 0x8084da0


undefined4 FUN_08084da0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0x2c);
    if (*(char *)(param_1 + 0x10) == '\0') {
      FUN_0808496c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      FUN_080849f4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined1 *)(param_1 + 0xb8) = 0;
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_08084e0c));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


