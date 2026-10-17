// undefined FUN_08068400(void)
// entry 0x8068400


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08068400(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08068454);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1c00;
    FUN_08005784(param_1 + 0x74,_FUN_08068458);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x21;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


