// undefined FUN_08081854(void)
// entry 0x8081854


undefined4 FUN_08081854(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_1c [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c[0] = *DAT_080818d0;
    local_1c[1] = DAT_080818d0[1];
    local_1c[2] = DAT_080818d0[2];
    local_1c[3] = DAT_080818d0[3];
    FUN_0801cf00(param_1,*(undefined2 *)(local_1c + *(byte *)(param_1 + 0xb4)));
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08081904);
  }
  else {
    FUN_08005784(param_1 + 0x74,
                 *(undefined4 *)
                  (*(char *)(param_1 + 0x71) * 4 +
                  *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                           ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                           *(undefined1 *)(param_1 + 0x70)) + DAT_080818d8) * 8 +
                          DAT_080818d4)));
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


