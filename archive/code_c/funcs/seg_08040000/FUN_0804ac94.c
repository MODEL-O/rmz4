// undefined FUN_0804ac94(void)
// entry 0x804ac94


undefined4 FUN_0804ac94(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\0') goto LAB_0804ad06;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  sVar1 = FUN_0804ad60(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    iVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar4 = iVar2 - *(int *)(param_1 + 0x58);
    if (iVar4 < 0) {
      if (*(int *)(param_1 + 0x58) - iVar2 <= DAT_0804ad24) goto LAB_0804acec;
    }
    else if (iVar4 <= DAT_0804ace0) {
LAB_0804acec:
      *(int *)(param_1 + 0x58) = iVar2;
    }
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  FUN_0804a790(*(undefined4 *)(param_1 + 0x28),param_1,0);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_0804ad06:
  FUN_0801cff0(param_1);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ad28);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  return in_lr;
}


