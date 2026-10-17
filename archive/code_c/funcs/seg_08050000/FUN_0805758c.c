// undefined FUN_0805758c(void)
// entry 0x805758c


undefined4 FUN_0805758c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08057600);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057608) * 4 + DAT_08057604)) * 0x18 + DAT_0805760c);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 7;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


