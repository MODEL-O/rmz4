// undefined FUN_0807a0dc(void)
// entry 0x807a0dc


undefined4 FUN_0807a0dc(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0807a134) {
      FUN_0801cf00(param_1);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0x12) = 0x20;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(*(int *)(param_1 + 0xd0) + 0xd) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


