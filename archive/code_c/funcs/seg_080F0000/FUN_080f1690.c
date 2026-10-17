// undefined FUN_080f1690(void)
// entry 0x80f1690


undefined4 FUN_080f1690(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080f16c6:
    uVar3 = DAT_080f16dc;
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080f1716;
LAB_080f170a:
    FUN_0801cf00(param_1,uVar3);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080f1716;
      FUN_0801cf00(param_1,DAT_080f16d8);
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080f16c6;
    }
    if (bVar1 != 2) {
      if ((bVar1 != 3) ||
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2,
         uVar3 = DAT_080f1724, cVar2 != '\0')) goto LAB_080f1716;
      goto LAB_080f170a;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto LAB_080f1716;
    FUN_0801cf00(param_1,DAT_080f16f8);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080f1716:
  FUN_0801cff0(param_1);
  return in_lr;
}


