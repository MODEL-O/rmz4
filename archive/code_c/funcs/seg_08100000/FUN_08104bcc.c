// undefined FUN_08104bcc(void)
// entry 0x8104bcc


undefined4 FUN_08104bcc(int param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(iVar3 + DAT_08104c6c + 0x24);
  if (*(char *)(param_1 + 0x10) != '\x01') {
    puVar1 = (undefined1 *)(param_1 + 0x70);
    if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar1) == DAT_08104c70) &&
       (pcVar2 = (char *)(iVar3 + DAT_08104c74), *pcVar2 != '\0')) {
      FUN_08002b10(0x1a0);
      FUN_0801cf00(param_1,DAT_08104c78);
      *pcVar2 = '\0';
    }
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar1) != DAT_08104c7c) {
      pcVar2 = (char *)(iVar3 + DAT_08104c80);
      if (*pcVar2 != '\0') {
        FUN_0801cf00(param_1);
        *pcVar2 = '\0';
        *(undefined1 *)(iVar3 + DAT_08104c74) = 0;
      }
    }
    if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*puVar1) != DAT_08104c70) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      FUN_0801cf00(param_1);
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


