// undefined FUN_08087f44(void)
// entry 0x8087f44


undefined4 FUN_08087f44(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    FUN_08005784(param_1 + 0x74,DAT_08087fa0);
    FUN_0801cf00(param_1,DAT_08087fa4);
    *(uint *)(param_1 + 0x5c) = ((bVar1 >> 4 & 1) * -2 + 1) * 0x40;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    local_24 = DAT_08087ffc;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_24 = 0x400;
    }
    local_24 = *(int *)(param_1 + 0x54) + local_24;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_1c = 0x200;
    local_18 = 0;
    FUN_08088ff0(&local_24,&local_1c,1,2);
  }
  if ((*(char *)(param_1 + 0x13) != '\0') && (iVar3 = FUN_08088c90(param_1), iVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 9;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


