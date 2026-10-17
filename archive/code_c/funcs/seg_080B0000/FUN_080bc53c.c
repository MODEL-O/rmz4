// undefined FUN_080bc53c(void)
// entry 0x80bc53c


undefined4 FUN_080bc53c(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\x01') && ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bc574);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080bc654(param_1);
  }
  else {
    iVar4 = FUN_0807f9b4(param_1);
    if ((iVar4 == 0) || (*(int *)(param_1 + 0xb8) <= *(int *)(*DAT_080bc598 + 0x58))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0xb5) = uVar1;
    if (*(char *)(param_1 + 0xb4) == '\0') {
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar4;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar4 + 0xe00);
      if (sVar2 != 0) {
        iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        iVar4 = iVar4 + DAT_080bc614;
        *(int *)(param_1 + 0x58) = iVar4;
        *(int *)(param_1 + 0xb8) = iVar4;
        *(char *)(param_1 + 0xb4) = '\x01';
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,DAT_080bc618,param_1 + 0x54,1);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(char *)(param_1 + 0x11) == '\x01') {
          *(undefined1 *)(param_1 + 0x12) = 0x40;
          FUN_0801cf00(param_1,DAT_080bc61c);
        }
      }
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      if (*(char *)(param_1 + 0x12) == '\0') {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bc650);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      }
      else {
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      }
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


