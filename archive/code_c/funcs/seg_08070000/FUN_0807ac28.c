// undefined FUN_0807ac28(void)
// entry 0x807ac28


undefined4 FUN_0807ac28(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807ac6c);
    FUN_08002b10(0x156);
    *(undefined1 *)(param_1 + 0xd6) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x9b;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    uVar2 = DAT_0807acac;
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(*(int *)(param_1 + 0xd0) + 0xd) != '\0') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd6) = 0;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = DAT_0807ac88;
    if (*(byte *)(*(int *)(param_1 + 0xd0) + 0xd) < 4) {
      return in_lr;
    }
  }
  FUN_0801cf00(param_1,uVar2);
  FUN_0801cff0(param_1);
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


