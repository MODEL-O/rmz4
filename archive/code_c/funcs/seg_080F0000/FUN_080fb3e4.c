// undefined FUN_080fb3e4(void)
// entry 0x80fb3e4


undefined4 FUN_080fb3e4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(byte *)(DAT_080fb404 + DAT_080fb408) & 0xf) == 0) {
      uVar1 = 100;
    }
    else {
      uVar1 = 200;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    FUN_08005784(param_1 + 0x74,DAT_080fb448);
    FUN_0801cf00(param_1,0x9600);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


