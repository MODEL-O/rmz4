// undefined FUN_080990f4(void)
// entry 0x80990f4


undefined4 FUN_080990f4(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,0x6800);
    iVar1 = DAT_08099148;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(byte *)(param_1 + 0xbe) + 0x40 & 0xff) * 2 + DAT_08099148) * 0xd >> 2;
    *(int *)(param_1 + 0x60) = *(short *)((uint)*(byte *)(param_1 + 0xbe) * 2 + iVar1) * 0xd >> 2;
    if (*(byte *)(param_1 + 0x13) < 3) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 8;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == -1) {
      bVar3 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar3;
      if (3 < bVar3) {
        *(undefined1 *)(param_1 + 0xd) = 2;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      if (bVar3 < 3) {
        if (*(char *)(param_1 + 0xbf) == '\0') {
          if (bVar3 == 2) {
            cVar4 = *(char *)(param_1 + 0xbe) + -0x56;
          }
          else {
            cVar4 = *(char *)(param_1 + 0xbe) + -0x55;
          }
        }
        else if (bVar3 == 2) {
          cVar4 = *(char *)(param_1 + 0xbe) + 'V';
        }
        else {
          cVar4 = *(char *)(param_1 + 0xbe) + 'U';
        }
        *(char *)(param_1 + 0xbe) = cVar4;
      }
      else if (*(char *)(param_1 + 0xbf) == '\0') {
        *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + -0x6a;
      }
      else {
        *(char *)(param_1 + 0xbe) = *(char *)(param_1 + 0xbe) + 'j';
      }
      FUN_0801cf00(param_1,*(byte *)(param_1 + 0x13) | 0x6800);
      FUN_080c3c48(param_1,0,0);
      FUN_08002b10(0x15a);
      *(undefined1 *)(param_1 + 0x12) = 0x10;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if (cVar4 == -1) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


