// undefined FUN_0800e024(void)
// entry 0x800e024


undefined4 FUN_0800e024(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (DAT_0800e040 < *(int *)(param_1 + 0x34)) {
      uVar1 = 0x23000;
      puVar2 = DAT_0800e05c;
    }
    else {
      uVar1 = 0x38000;
      puVar2 = DAT_0800e044;
    }
    *puVar2 = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


