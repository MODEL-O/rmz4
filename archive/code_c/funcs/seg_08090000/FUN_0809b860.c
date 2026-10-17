// undefined FUN_0809b860(void)
// entry 0x809b860


undefined4 FUN_0809b860(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[1] = DAT_0809b8a8[1];
  local_14[0] = *DAT_0809b8a8;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_0809b8ac);
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      return in_lr;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


