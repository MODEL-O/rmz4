// undefined FUN_0804951c(void)
// entry 0x804951c


undefined4 FUN_0804951c(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if (*(byte *)(iVar6 + 199) < 4) {
    cVar2 = FUN_0803a99c(param_1,1);
    if ((*(char *)(param_1 + 0x10) != '\0') || (*(char *)(iVar6 + 0xfa) != '\x02'))
    goto LAB_0804957c;
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    cVar2 = '\0';
    if (cVar3 == -1) {
      cVar2 = -1;
    }
LAB_0804957c:
    if ((cVar2 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    if (cVar2 != -1) {
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080495a4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      uVar5 = *(undefined4 *)(*piVar4 + 8);
      goto LAB_080495dc;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080495e4);
  *(undefined4 *)(param_1 + 0xc) = 3;
  uVar5 = *(undefined4 *)(*piVar4 + 0xc);
LAB_080495dc:
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


