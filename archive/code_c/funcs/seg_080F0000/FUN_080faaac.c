// undefined FUN_080faaac(void)
// entry 0x80faaac


undefined4 FUN_080faaac(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
        FUN_080cb0bc(param_1 + 0x54,1,0,0);
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == -1) {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else if (*(char *)(param_1 + 0xe) == '\0') {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar4 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar4;
      if (0x700 < iVar4) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x1500);
      if (sVar2 == 0) {
        FUN_08005784(param_1 + 0x74,DAT_080fab88);
      }
      else {
        FUN_08002b10(0xa8);
        iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = iVar4 + DAT_080fab70;
        FUN_08005784(param_1 + 0x74,DAT_080fab74);
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080faad8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080fab8c(param_1);
  }
  return in_lr;
}


