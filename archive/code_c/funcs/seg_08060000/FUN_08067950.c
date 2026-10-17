// undefined FUN_08067950(void)
// entry 0x8067950


undefined4 FUN_08067950(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0806797c);
    if (*(short *)(*DAT_08067980 + 0xa4) < 5) {
      *(undefined1 *)(param_1 + 0xdd) = 1;
      uVar1 = 0x44;
    }
    else {
      *(undefined1 *)(param_1 + 0xdd) = 0;
      uVar1 = 0x3c;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x12;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


