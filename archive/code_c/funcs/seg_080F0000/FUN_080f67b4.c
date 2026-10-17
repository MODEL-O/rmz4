// undefined FUN_080f67b4(void)
// entry 0x80f67b4


undefined4 FUN_080f67b4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0xfffffff0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar3;
      if (iVar3 < DAT_080f6844) {
        *(int *)(param_1 + 0x60) = DAT_080f6844;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = FUN_08007db4(*(int *)(param_1 + 0x54) + DAT_080f6848);
      if (iVar3 == 0) {
        return in_lr;
      }
      iVar3 = FUN_08008748(*(int *)(param_1 + 0x54) + DAT_080f6848,*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + 1;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
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


