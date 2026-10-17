// undefined FUN_080f6984(void)
// entry 0x80f6984


undefined4 FUN_080f6984(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 100) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar3;
      if (0x300 < iVar3) {
        *(undefined4 *)(param_1 + 0x5c) = 0x300;
      }
      iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x54) = iVar3;
      iVar3 = FUN_0800834c(iVar3 + 0x1000,*(int *)(param_1 + 0x58) + 0x1000);
      if (iVar3 == 0) {
        return in_lr;
      }
      iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1000);
      *(int *)(param_1 + 0x54) = iVar3 + DAT_080f6a20;
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


