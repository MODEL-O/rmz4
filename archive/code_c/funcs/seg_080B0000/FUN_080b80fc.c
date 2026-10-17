// undefined FUN_080b80fc(void)
// entry 0x80b80fc


undefined4 FUN_080b80fc(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b8184);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + 0x800;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3000;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      FUN_0801cc9c(param_1);
      FUN_0801ceec(param_1);
      FUN_0801cf00(param_1,DAT_080b8188);
      *(undefined1 *)(param_1 + 0x25) = 0x17;
      FUN_08005784(param_1 + 0x74,DAT_080b818c);
      *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + DAT_080b8190;
      *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
      *(undefined1 *)(param_1 + 0x13) = 8;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0xb4) + DAT_080b81d8;
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xb8) + 0x3700;
    if ((*(char *)(param_1 + 0x73) == '\x03') &&
       (cVar1 = *(char *)(param_1 + 0x13) + -1, *(char *)(param_1 + 0x13) = cVar1, cVar1 == -1)) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


