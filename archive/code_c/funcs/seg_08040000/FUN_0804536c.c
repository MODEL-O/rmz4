// undefined FUN_0804536c(void)
// entry 0x804536c


undefined4 FUN_0804536c(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (iVar4 <= DAT_0804542c) {
      *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100) * 2;
    }
  }
  cVar1 = FUN_0803a99c(param_1,3);
  if (*(char *)(iVar6 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (((cVar1 != '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) ||
     ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar1 != -1) {
      FUN_080d0c88(2,param_1 + 0x54);
      FUN_08002b10(0x35);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045430);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08045218(param_1);
  }
  return in_lr;
}


