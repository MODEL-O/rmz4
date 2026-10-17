// undefined FUN_08081a00(void)
// entry 0x8081a00


undefined4 FUN_08081a00(int param_1)

{
  undefined4 in_lr;
  undefined4 local_1c [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c[0] = *DAT_08081a78;
    local_1c[1] = DAT_08081a78[1];
    local_1c[2] = DAT_08081a78[2];
    local_1c[3] = DAT_08081a78[3];
    FUN_0801cf00(param_1,*(undefined2 *)(local_1c + *(byte *)(param_1 + 0xb4)));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08081aa8);
  }
  else {
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                           ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                           *(undefined1 *)(param_1 + 0x70)) + DAT_08081a80) * 8 +
                          DAT_08081a7c)));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


