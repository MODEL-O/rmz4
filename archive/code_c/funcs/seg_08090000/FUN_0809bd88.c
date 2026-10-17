// undefined FUN_0809bd88(void)
// entry 0x809bd88


undefined4 FUN_0809bd88(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_28 [4];
  byte abStack_18 [4];
  
  local_28[0] = *DAT_0809be14;
  local_28[1] = DAT_0809be14[1];
  local_28[2] = DAT_0809be14[2];
  local_28[3] = DAT_0809be14[3];
  FUN_08129258(abStack_18,DAT_0809be18,4);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_080664bc(param_1 + 0x54,0,0);
    FUN_0801cf00(param_1,*(undefined2 *)(local_28 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)abStack_18[bVar1] * 4 + DAT_0809be1c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


