// undefined FUN_080e3708(void)
// entry 0x80e3708


undefined4 FUN_080e3708(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (1 < *(byte *)(iVar5 + 0xc)) {
LAB_080e3726:
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e3740);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_080e3780(param_1);
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar3 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar3;
  if (bVar3 == 0) goto LAB_080e3726;
  bVar2 = cVar1 - 1;
  if (bVar2 < 0xc) {
    if ((bVar3 & 1) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080e3776;
    }
  }
  else {
    if (0x18 < bVar2) {
      return in_lr;
    }
    if ((bVar3 & 3) != 0) {
      bVar3 = *(byte *)(param_1 + 10) | 1;
      goto LAB_080e3776;
    }
  }
  bVar3 = *(byte *)(param_1 + 10) & 0xfe;
LAB_080e3776:
  *(byte *)(param_1 + 10) = bVar3;
  return in_lr;
}


