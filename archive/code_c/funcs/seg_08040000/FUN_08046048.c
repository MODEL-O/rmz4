// undefined FUN_08046048(void)
// entry 0x8046048


undefined4 FUN_08046048(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (4 < bVar1) {
      FUN_0801cf00(param_1,DAT_08046070);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804609c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


