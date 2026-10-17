// undefined FUN_08088468(void)
// entry 0x8088468


undefined4 FUN_08088468(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080884b4);
    FUN_0801cf00(param_1,DAT_080884b8);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 0x1f) == 0) {
    local_24 = DAT_080884ec;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_24 = 0x400;
    }
    local_24 = *(int *)(param_1 + 0x54) + local_24;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_1c = 0x200;
    local_18 = 0;
    FUN_08088ff0(&local_24,&local_1c,0,2);
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  if (bVar1 != 0x20) {
    if (bVar1 < 0x21) {
      if (bVar1 != 0x10) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x30) {
      if (bVar1 != 0x40) {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
  }
  FUN_08002b10(0x2c);
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + DAT_08088534;
  uVar2 = FUN_0810d398(*(undefined4 *)(*DAT_08088538 + 0x54),
                       *(int *)(*DAT_08088538 + 0x58) + DAT_0808853c,local_14);
  FUN_080bd43c(&local_14,0x180,uVar2);
  return in_lr;
}


