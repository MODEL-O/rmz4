// undefined FUN_080e0b24(void)
// entry 0x80e0b24


undefined4 FUN_080e0b24(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_0801cf00(param_1,DAT_080e0b70);
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080e0cd4(param_1);
  if (cVar1 == '\x01') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0b74);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


