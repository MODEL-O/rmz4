// undefined FUN_080bc984(void)
// entry 0x80bc984


undefined4 FUN_080bc984(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (3 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      FUN_08005784(param_1 + 0x74,
                   *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080bc9d8) +
                   (uint)*(byte *)(param_1 + 0x12) * 0x18);
      FUN_0801cf00(param_1,*(undefined2 *)
                            ((uint)*(byte *)(param_1 + 0x12) * 2 +
                             (uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080bc9dc));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      cVar1 = '\x1e';
    }
    else {
      if (2 < *(byte *)(param_1 + 0x12)) {
        return in_lr;
      }
      FUN_08005784(param_1 + 0x74,
                   *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080bca24) +
                   (uint)*(byte *)(param_1 + 0x12) * 0x18);
      FUN_0801cf00(param_1,*(undefined2 *)
                            ((uint)*(byte *)(param_1 + 0x12) * 2 +
                             (uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080bca28));
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      cVar1 = '\x1e';
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x13) + -1;
  }
  *(char *)(param_1 + 0x13) = cVar1;
  return in_lr;
}


