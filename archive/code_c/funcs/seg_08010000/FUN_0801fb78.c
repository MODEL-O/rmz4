// undefined FUN_0801fb78(void)
// entry 0x801fb78


undefined4 FUN_0801fb78(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x44);
  FUN_0801f998(param_1,*(undefined1 *)(param_1 + 0x19));
  return in_lr;
}


