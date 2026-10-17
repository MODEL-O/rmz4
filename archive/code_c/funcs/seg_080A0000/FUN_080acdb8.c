// undefined FUN_080acdb8(void)
// entry 0x80acdb8


undefined4 FUN_080acdb8(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined1 auStack_18 [8];
  
  FUN_08129258(auStack_18,DAT_080acdec,5);
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    pcVar3 = (char *)(param_1 + 0xb8);
    if (*pcVar3 == '\0') {
      if ((*(byte *)(param_1 + 0xb5) & *(byte *)(param_1 + 0xb4)) == 0) {
        *pcVar3 = '\x01';
      }
    }
    else if (*(char *)(param_1 + 0xb9) != '\0') {
      pbVar2 = (byte *)(param_1 + 0xb6);
      *(byte *)(param_1 + 0xd) = *pbVar2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *pcVar3 = '\0';
      *(char *)(param_1 + 0xb9) = '\0';
      *(undefined1 *)(param_1 + 0xb7) = auStack_18[*pbVar2];
      if (*pbVar2 == 1) {
        uVar4 = 0;
        do {
          if (((int)(uint)*(byte *)(param_1 + 0xb4) >> (uVar4 & 0xff) & 1U) == 0) {
            FUN_080acc04(param_1,uVar4 & 0xff);
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 4);
      }
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080acdf0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080ad364(param_1);
  }
  return in_lr;
}


