// undefined FUN_0800e024(void)
// entry 0x800e024


void FUN_0800e024(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (0x000010df < *(int *)(param_1 + 0x34)) {
      uVar1 = 0x23000;
      puVar2 = 0x0202ea5c;
    }
    else {
      uVar1 = 0x38000;
      puVar2 = 0x0202ea60;
    }
    *puVar2 = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return;
}


