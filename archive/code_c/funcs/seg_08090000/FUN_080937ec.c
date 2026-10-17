// undefined FUN_080937ec(void)
// entry 0x80937ec


undefined4 FUN_080937ec(int param_1)

{
  undefined4 *extraout_r1;
  undefined4 *puVar1;
  undefined4 in_lr;
  undefined4 local_18 [3];
  
  local_18[0] = *DAT_0809385c;
  local_18[1] = DAT_0809385c[1];
  local_18[2] = DAT_0809385c[2];
  puVar1 = DAT_0809385c + 3;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093860);
    FUN_0801cf00(param_1,*(undefined2 *)(local_18 + *(byte *)(param_1 + 0xb8)));
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    puVar1 = extraout_r1;
  }
  FUN_0801cff0(param_1,puVar1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08094a38(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(byte *)(param_1 + 0x12) < 0x20)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


