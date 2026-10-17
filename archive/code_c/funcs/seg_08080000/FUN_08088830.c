// undefined FUN_08088830(void)
// entry 0x8088830


undefined4 FUN_08088830(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar2 = uVar3 + 2;
    }
    FUN_080d83f8(&local_14,2,uVar2);
    FUN_0801cf00(param_1,DAT_080888c4);
    *(uint *)(param_1 + 0x5c) = (uVar3 * 2 + -1) * 0x60;
    *(uint *)(param_1 + 100) = (uVar3 * -2 + 1) * 4;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)(DAT_080888c8 + 0xc));
  }
  return in_lr;
}


