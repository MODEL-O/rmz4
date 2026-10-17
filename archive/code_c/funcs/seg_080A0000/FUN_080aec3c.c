// undefined FUN_080aec3c(void)
// entry 0x80aec3c


undefined4 FUN_080aec3c(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080aec98,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080aec9c;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  pcVar3 = (char *)(iVar4 + 0xd8);
  if (*pcVar3 == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
      if (*(char *)(param_1 + 0xf) == '\0') {
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == -1) {
          uVar2 = FUN_08128bdc((*(int *)(param_1 + 0x54) - *(int *)(*DAT_080aed44 + 0x54)) * 0x100
                               >> 0x10,((*(int *)(param_1 + 0x58) + 0xf00) -
                                       *(int *)(*DAT_080aed44 + 0x58)) * 0x100 >> 0x10);
          iVar4 = DAT_080aed48;
          uVar2 = ((uVar2 & 0xffff) >> 8) + 0x80;
          *(int *)(param_1 + 0x5c) =
               (int)*(short *)((uVar2 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080aed48);
          *(int *)(param_1 + 0x60) = (int)*(short *)((uVar2 & 0xff) * 2 + iVar4);
          *(undefined1 *)(param_1 + 0x12) = 0x60;
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        }
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        cVar1 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar1;
        if (cVar1 == -1) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          *(undefined1 *)(param_1 + 0xe) = 0;
        }
      }
    }
    else {
      *pcVar3 = '\x01';
      iVar4 = *DAT_080aecd4;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + DAT_080aecd8;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x02';
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_080aee28(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


