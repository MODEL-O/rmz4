// undefined FUN_0803bf3c(void)
// entry 0x803bf3c


undefined4 FUN_0803bf3c(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (bVar1 < 0x21) {
      return in_lr;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    FUN_0804c628(*(undefined4 *)(param_1 + 0xb4),param_1,0,0);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803bfc8);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0803bfa0);
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


