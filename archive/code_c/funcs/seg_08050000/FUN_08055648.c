// undefined FUN_08055648(void)
// entry 0x8055648


undefined4 FUN_08055648(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = *DAT_080556e4;
  local_c = DAT_080556e4[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = 0;
    if (*DAT_080556e8 == 0x10) {
      iVar1 = 4;
    }
    FUN_08002b10(*(undefined2 *)((int)&local_10 + iVar1));
    FUN_08002b10(0xf8);
    FUN_0801cf00(param_1,DAT_080556ec);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080556f4) * 4 + DAT_080556f0)) * 0x18 + DAT_080556f8);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


