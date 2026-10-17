// undefined FUN_080943b0(void)
// entry 0x80943b0


undefined4 FUN_080943b0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_10 = (uVar2 * -2 + 1) * 0x100 + *(int *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x58) + DAT_08094428;
    FUN_080db7ec(param_1,&local_10,uVar2,*(undefined1 *)(param_1 + 0xba));
    FUN_0801cf00(param_1,DAT_0809442c);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08094a38(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


