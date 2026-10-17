// undefined FUN_080aeb54(void)
// entry 0x80aeb54


undefined4 FUN_080aeb54(int param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 in_lr;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xd7);
  *pcVar1 = *pcVar1 + '\x01';
  if ((*(char *)(param_1 + 0xd) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080aebac));
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080aeb94);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080aebb0(param_1);
  }
  return in_lr;
}


