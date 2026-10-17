// undefined FUN_080a6624(void)
// entry 0x80a6624


undefined4 FUN_080a6624(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a668c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x70) & DAT_080a6690) == 0x10200) {
    FUN_080cab5c(param_1 + 0x54,0);
    FUN_08002b10(DAT_080a6694);
    FUN_08005784(param_1 + 0x74,DAT_080a6698);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0801cf00(param_1,0x8a00);
    *(undefined1 *)(param_1 + 0x12) = 0x78;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


