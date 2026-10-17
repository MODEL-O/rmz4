// undefined FUN_08054b58(void)
// entry 0x8054b58


undefined4 FUN_08054b58(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 local_20 [8];
  undefined4 local_18;
  int local_14;
  
  FUN_08129258(local_20,DAT_08054c28,5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    FUN_0805504c(param_1,4,*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0));
    *(undefined1 *)(param_1 + 0x12) = 0x6c;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08054fb0(param_1);
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar1 = FUN_08055068(param_1,*(undefined4 *)(param_1 + 0xc0));
    *(undefined1 *)(param_1 + 0x13) = uVar1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    cVar2 = FUN_08129198(*(char *)(param_1 + 0x12),0x24);
    if (cVar2 == '\0') {
      FUN_08002b10(0x56);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_08054c2c;
      iVar3 = 0;
      do {
        FUN_080bffd0(param_1,&local_18,0,local_20[iVar3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 5);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
    }
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    *(undefined1 *)(param_1 + 0xe) = 6;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


